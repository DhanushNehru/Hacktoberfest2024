import sys
import vlc
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout, QListWidget

class IPTVPlayer(QWidget):
    def __init__(self):
        super().__init__()

        # Create a VLC player instance
        self.instance = vlc.Instance()
        self.player = self.instance.media_player_new()

        # Layout setup
        self.setWindowTitle("IPTV Player")
        self.setGeometry(100, 100, 400, 300)

        # Create UI elements
        self.play_button = QPushButton('Play')
        self.pause_button = QPushButton('Pause')
        self.next_button = QPushButton('Next')
        self.prev_button = QPushButton('Previous')
        self.channel_list = QListWidget()

        # Add buttons to layout
        layout = QVBoxLayout()
        layout.addWidget(self.channel_list)
        layout.addWidget(self.play_button)
        layout.addWidget(self.pause_button)
        layout.addWidget(self.next_button)
        layout.addWidget(self.prev_button)
        self.setLayout(layout)

        # Connect buttons to functions
        self.play_button.clicked.connect(self.play_channel)
        self.pause_button.clicked.connect(self.pause_channel)
        self.next_button.clicked.connect(self.next_channel)
        self.prev_button.clicked.connect(self.prev_channel)

        # Load channels (use your .m3u playlist)
        self.channels = ["https://raw.githubusercontent.com/Free-TV/IPTV/master/playlist.m3u8"]
        self.channel_list.addItems([f"Channel {i+1}" for i in range(len(self.channels))])
        self.current_channel_index = 0

    def play_channel(self):
        selected_channel = self.channel_list.currentRow()
        if selected_channel != -1:
            self.current_channel_index = selected_channel
            self._play_stream(self.channels[selected_channel])

    def pause_channel(self):
        self.player.pause()

    def next_channel(self):
        if self.current_channel_index < len(self.channels) - 1:
            self.current_channel_index += 1
            self.channel_list.setCurrentRow(self.current_channel_index)
            self._play_stream(self.channels[self.current_channel_index])

    def prev_channel(self):
        if self.current_channel_index > 0:
            self.current_channel_index -= 1
            self.channel_list.setCurrentRow(self.current_channel_index)
            self._play_stream(self.channels[self.current_channel_index])

    def _play_stream(self, url):
        media = self.instance.media_new(url)
        self.player.set_media(media)
        self.player.play()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    player = IPTVPlayer()
    player.show()
    sys.exit(app.exec_())
