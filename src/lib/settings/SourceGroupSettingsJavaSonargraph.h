#ifndef SOURCE_GROUP_SETTINGS_JAVA_SONARGRAPH_H
#define SOURCE_GROUP_SETTINGS_JAVA_SONARGRAPH_H

#include "settings/SourceGroupSettings.h"
#include "settings/SourceGroupSettingsWithClasspath.h"
#include "settings/SourceGroupSettingsWithJavaStandard.h"
#include "settings/SourceGroupSettingsWithSonargraphProjectPath.h"

class SourceGroupSettingsJavaSonargraph
	: public SourceGroupSettings
	, public SourceGroupSettingsWithClasspath
	, public SourceGroupSettingsWithJavaStandard
	, public SourceGroupSettingsWithSonargraphProjectPath
{
public:
	SourceGroupSettingsJavaSonargraph(const std::string& id, const ProjectSettings* projectSettings);

	void load(std::shared_ptr<const ConfigManager> config) override;
	void save(std::shared_ptr<ConfigManager> config) override;

	bool equals(std::shared_ptr<SourceGroupSettings> other) const override;

private:
	const ProjectSettings* getProjectSettings() const override;
};

#endif // SOURCE_GROUP_SETTINGS_JAVA_SONARGRAPH_H