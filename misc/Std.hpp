#include <cstring>
#include <iostream>

class Std {
public:
    // memcpyのサンプルメソッド
    static int memcopy() {
        // ソースバッファーとデスティネーションバッファーを準備
        char source[] = "Hello, memcpy!";
        char destination[20];
        
        // コピー前のソースバッファーの内容を表示
        std::cout << "コピー前のソースバッファー: " << source << std::endl;
        std::cout << "コピー前のデスティネーションバッファー: ";
        for (int i = 0; i < 20; i++) {
            if (destination[i] == '\0') {
                std::cout << "[NULL]";
                break;
            } else {
                std::cout << destination[i];
            }
        }
        std::cout << std::endl;
        
        // memcpyを使ってデータをコピー
        // 引数: 宛先ポインタ, ソースポインタ, コピーするバイト数
        std::memcpy(destination, source, std::strlen(source) + 1); // +1 でNULL文字もコピー
        
        // コピー後のデスティネーションバッファーの内容を表示
        std::cout << "コピー後のソースバッファー: " << source << std::endl;
        std::cout << "コピー後のデスティネーションバッファー: " << destination << std::endl;
        
        // 部分的なコピーの例
        char partial_destination[10];
        std::memcpy(partial_destination, source + 7, 6); // "memcpy"の部分だけコピー
        partial_destination[6] = '\0'; // 末尾にNULLを付ける
        
        std::cout << "部分コピー結果: " << partial_destination << std::endl;
        return 0;
    }
};