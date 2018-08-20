#pragma once

#include <unordered_map>
#include "device\deviceBundle.h"

enum class DeviceType {
	MAJOR_GRAPHICS_DEVICE,
	SECONDARY_GRAPHICS_DEVICE,
	COMPUTING_DEVICE,
	SLI_DISCRETE_DEVICE0,
	SLI_DISCRETE_DEVICE1
};

class DeviceManager {

public:
	DeviceManager();
	DeviceBundle getDeviceBundle(DeviceType deviceType) const;
	void addDevice(DeviceType deviceType, const DeviceBundle deviceBundle);
private:
	std::unordered_map<DeviceType, DeviceBundle> devices;
};
