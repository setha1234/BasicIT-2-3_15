
    ifstream inFile("data.bin", ios::binary);
    inFile.read(reinterpret_cast<char *>(&number), sizeof(number));
    inFile.close();

    cout << "Number: " << number << endl