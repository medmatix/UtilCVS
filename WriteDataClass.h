/* generated by dia/codegen.py */
/*a text file will be written line-by-line  by some criteria provided from a passed or stored in a vector of vectors of strings. The type os separators to be used for the data determines the type of text file writted (plain text, comma separated etc.)*/
class WriteDataFile
{
public:
	string getFileName ();
	void setFileName (string fname);
	vector<string> getRawData ();
	void setRawDataFile (vector<strings> dataStruct);
	string setFldSep (string fsep);
	int getNCols ();
	int getNRows ();
	bool getHasHeader ();
	vector<string> getColNames ();
	void setColNames (vector<string> cNames);
	vector<string> getVarTypes ();
	void setVarTypes (vector<string> vTypes);
	void writeFile (string fname,
	                bool hasHeader,
	                int start,
	                int end,
	                vector<string> writeDStruct);
	string unParseLine (vector<string> lineToUnParse);
	void appendUnParsed ();
	void serializeObj ();
	void displayObj ();
	void toJSONFile ();
	void toString ();
	vector<vector<string> > dataToProcWrite;
private:
	string writetoFile;
	vector<string> rawDataStruct;
	string sepChars;
	int nRows;
	bool hasHeader;
	string unParsed;
	vector<string> parsedBlock;
	vector<strings> colNames;
	vector<strings> varTypes;
};

