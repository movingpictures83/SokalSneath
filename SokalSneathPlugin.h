#ifndef SOKALSNEATHPLUGIN_H
#define SOKALSNEATHPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SokalSneathPlugin : public Plugin
{
public: 
 std::string toString() {return "SokalSneath";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
