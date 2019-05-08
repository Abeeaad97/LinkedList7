#include <iostream>
#include <string>
#include <fstream>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist & list, string & file) {
    int n;
    cout << "Please enter the File name " << endl;
    cin >> file;
    ifstream infile;
    infile.open(file);
    while(infile >> n)
    {
        list.addToFront(n);
        cout << "done" << endl;
    }

}

int main() {

    string filename, file, revfile;
    linkedlist lis;
    int result = 0;
    int total = 0;
    int avg = 0.0;
    readFile(lis, filename);
    /*
    result = lis.sum();
    cout << "result: " << result << endl;
    total = lis.count();
    cout << "total: " << total << endl;
    avg = lis.average(total, result);
    cout << "average: " << avg << endl;
    cout << "Please enter the name of the new file .txt" << endl; 
    cin >> file;
    */
    //lis.writeInorder(file);
    //cout << "Enter the name for the reverse file .txt" << endl;
    //lis.writeReversed(revfile);



    return 0;
}