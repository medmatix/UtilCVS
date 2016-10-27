/* generated by dia/codegen.py */

#include <WriteDataClass.h>

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
	string writetoFile;;
	vector<string> rawDataStruct;;
	string sepChars;
	int nRows;
	bool hasHeader;
	string unParsed;
	vector<string> parsedBlock;
	vector<strings> colNames;
	vector<strings> varTypes;
};

