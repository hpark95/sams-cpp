
// Since you only write to the file, use ofstream
// fstream myFile;
ofstream myFile;

myFile.open("HelloFile.txt", ios_base::out);

// Check if we successfully opened the file
if(myFile.is_open()) {
    myFile << "Hello file!";
    myFile.close();
}