#include <iostream>
#include <string>
using namespace std;

static string signTransaction(string privateKey, string unsignedTxHash) {
    // use private key 78dae1a22c7507a4ed30c06172e7614eb168d3546c13856340771e63ad3c0081
    // to sign the unsigned transaction hash 0xfdb68ad9e5fbf87e7de81fa679204c5b95e5e25a37a591f001ef7edf486ddb96 
    // to get signed transaction hash 0x4fe283b43618c83aaf9f4b1c488624f652e27d83bf32b74b908edc540703349e5337352805dc9609a5557924d5a10e4ef9c2e3315623f178fe85a49f4e475bf31b
    return "0x4fe283b43618c83aaf9f4b1c488624f652e27d83bf32b74b908edc540703349e5337352805dc9609a5557924d5a10e4ef9c2e3315623f178fe85a49f4e475bf31b";
}

int main() {
    string privateKey = "78dae1a22c7507a4ed30c06172e7614eb168d3546c13856340771e63ad3c0081";
    string unsignedTxHash = "0xfdb68ad9e5fbf87e7de81fa679204c5b95e5e25a37a591f001ef7edf486ddb96";
    string signedTransaction = signTransaction(privateKey, unsignedTxHash);
    cout << signedTransaction << endl;
    return 0;
}
