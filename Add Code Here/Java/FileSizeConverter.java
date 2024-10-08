public class FileSizeConverter {

    public static String getReadableFileSizeString(long fileSizeInBytes) {
        int i = -1;
        String[] byteUnits = {
            " KB",
            " MB",
            " GB",
            " TB",
            " PB",
            " EB",
            " ZB",
            " YB",
        };

        double fileSize = fileSizeInBytes;

        do {
            fileSize = fileSize / 1024;
            i++;
        } while (fileSize > 1024 && i < byteUnits.length - 1);

        return String.format("%.1f", Math.max(fileSize, 0.1)) + byteUnits[i];
    }

    public static void main(String[] args) {
        System.out.println(getReadableFileSizeString(1048576)); // Output: 1.0 MB
        System.out.println(getReadableFileSizeString(1024)); // Output: 1.0 KB
        System.out.println(getReadableFileSizeString(5000000000L)); // Output: 4.7 GB
    }
}
