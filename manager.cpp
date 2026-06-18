#include "manager.h"

Manager::Manager() : device_count(0) {
    for (int i = 0; i< MAX_DEVICES; i++) devices[i] = nullptr;
}
void Manager::add_device(Device *device) {
    for (int i = 0; i<device_count; i++) {
        if (*devices[i] == *device) throw DuplicateDevice(device);
    }
    devices[device_count++]= device;
}
bool Manager::compare_device(int index, const Device& other) const {
    if (index < 0 || index > device_count) return false;
    if (*devices[index]==other) return true;
    else return false;
}
Device* Manager::find_device(const Device& search_device) const {
    for (int i = 0; i< device_count; i++) {
        if ( *devices[i] == search_device) return devices[i];
    }
    return nullptr;
}
void Manager::delete_device(const Device &device) {
    for (int i = 0; i< device_count; i++) {
        if (*devices[i] == device) {
            delete devices[i];
            for (int j = i; j<device_count-1; j++) {
                devices[j] = devices[j+1];
            }
            device_count--;
            devices[device_count] = nullptr;
            return;
        }
    }
}
void Manager::print_all_devices() const {
    for (int i = 0; i< device_count; i++) {
        devices[i]->print_device();
    }
}
Manager::~Manager() {
    for (int i = 0; i<device_count; i++) {
        delete devices[i];
    }
}