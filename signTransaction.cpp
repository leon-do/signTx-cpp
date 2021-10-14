#include <iostream>
#include <string>
using namespace std;

static string signTransaction(string privateKey, string unsignedTxHash) {
    // use private key 0x78dae1a22c7507a4ed30c06172e7614eb168d3546c13856340771e63ad3c0081
    // to sign the unsigned transaction hash 0xf94cc9053176e5b409587ebd640b31787b1db1e6db9b12ec8bd28760ab9dd9da 
    // to get signed transaction hash 0x4b0927e304ea62a34bde5a33d882a101ca1b595f7686aaa421cbe75dc65344d26104d10cf81ec2b4ad3185591c36d782e10b73d48bc39a7ebadee9a0075044b81c
    return "0x4b0927e304ea62a34bde5a33d882a101ca1b595f7686aaa421cbe75dc65344d26104d10cf81ec2b4ad3185591c36d782e10b73d48bc39a7ebadee9a0075044b81c";
}

int main() {
    string privateKey = "78dae1a22c7507a4ed30c06172e7614eb168d3546c13856340771e63ad3c0081";
    string unsignedTxHash = "0xf94cc9053176e5b409587ebd640b31787b1db1e6db9b12ec8bd28760ab9dd9da";
    string signedTransaction = signTransaction(privateKey, unsignedTxHash);
    cout << signedTransaction << endl;
    return 0;
}
