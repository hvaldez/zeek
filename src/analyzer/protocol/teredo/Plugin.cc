// See the file  in the main distribution directory for copyright.


#include "plugin/Plugin.h"

#include "Teredo.h"

namespace plugin {
namespace Zeek_Teredo {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure()
		{
		AddComponent(new ::analyzer::Component("Teredo", ::analyzer::teredo::Teredo_Analyzer::Instantiate));

		plugin::Configuration config;
		config.name = "Zeek::Teredo";
		config.description = "Teredo analyzer";
		return config;
		}
} plugin;

}
}
