//Since we are writing to file, we should use ofstream
// ifstream myFile("SomeFile.txt");
ofstream myFile("SomeFile.txt");

if(myFile.is_open()) {
    myFile << "This is some text" << endl;
    myFile.close();
}