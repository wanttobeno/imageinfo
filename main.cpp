#include <iostream>
#include "imageinfo.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    const char *file = argv[1];
    ImageInfo<const char *, IIFilePathReader> imageInfo(file);

    std::cout << "File: " << file << "\n";
    std::cout << "  - Error    : " << imageInfo.getErrorMsg() << "\n";
    std::cout << "  - Width    : " << imageInfo.getWidth() << "\n";
    std::cout << "  - Height   : " << imageInfo.getHeight() << "\n";
    std::cout << "  - Format   : " << imageInfo.getFormat() << "\n";
    std::cout << "  - Ext      : " << imageInfo.getExt() << "\n";
    std::cout << "  - Full Ext : " << imageInfo.getFullExt() << "\n";
    std::cout << "  - Mimetype : " << imageInfo.getMimetype() << "\n\n";

    return imageInfo.getErrorCode();
}
