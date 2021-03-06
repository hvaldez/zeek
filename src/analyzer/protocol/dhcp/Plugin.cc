// See the file  in the main distribution directory for copyright.

#include "DHCP.h"
#include "plugin/Plugin.h"
#include "analyzer/Component.h"

namespace zeek::plugin::detail::Zeek_DHCP {

class Plugin : public zeek::plugin::Plugin {
public:
	zeek::plugin::Configuration Configure() override
		{
		AddComponent(new zeek::analyzer::Component("DHCP", zeek::analyzer::dhcp::DHCP_Analyzer::Instantiate));

		zeek::plugin::Configuration config;
		config.name = "Zeek::DHCP";
		config.description = "DHCP analyzer";
		return config;
		}
} plugin;

} // namespace zeek::plugin::detail::Zeek_DHCP
