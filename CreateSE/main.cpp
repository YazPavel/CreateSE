#include <iostream>
#include "converter.hpp"
// The project is based on https://github.com/kolarji2/SE_api code with minor modifications
int main()
{
	Converter converter(1e-6, vector<float>(3, 1));
	bool dataLoaded = converter.Generate("file", 10);
	converter.SaveFe("foam.fe");
}

