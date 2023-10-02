import io, os, time

greetings = ["1.txt","2.txt"]
frames = []

print("Hello World")

for greet in greetings:
    with io.open(greet, 'r', encoding='utf-8') as f:
        frames.append(f.readlines())

for i in range(10):
    for frame in frames:
        print("".join(frame))
        time.sleep(1)
        os.system('cls' if os.name == 'nt' else 'clear')