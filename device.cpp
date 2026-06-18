#include "device.h"
#include "manager.h"

Device::Device(int id, const std::string &type, const std::string &brand)
    : device_id(id), device_type(type), brand(brand)
{}
Device::~Device() {}
bool Device::operator==(const Device &other) const {
    if (device_id == other.device_id) return true;
    return false;
}
bool Device::operator<(const Device &other) const {
    if (device_id< other.device_id) return true;
    return false;
}
bool Device::operator>(const Device &other) const {
    if (device_id > other.device_id) return true;
    return false;
}
bool Device::operator<=(const Device &other) const {
    if (device_id < other.device_id || device_id == other.device_id) return true;
    return false;
}
bool Device::operator>=(const Device &other) const{
    if (device_id > other.device_id || device_id == other.device_id) return true;
    return false;
}
Phone::Phone(int id, const std::string& brand, int data_usage)
    : Device(id,"Phone", brand), data_usage(data_usage) {}
Phone::~Phone() {}
void Phone::print_device() const {
    std::cout<<device_type<<" [ID: "<< device_id<< ", Brand: "<< brand<<", Data Usage: "<<data_usage<<" GB]\n";
}
bool Phone::operator<(const Phone& other) const {
    if(data_usage < other.data_usage) return true;
    return false;
}
bool Phone::operator>(const Phone& other) const {
    if (data_usage > other.data_usage) return true;
    return false;
}
bool Phone::operator<=(const Phone& other) const {
    if (data_usage < other.data_usage || data_usage == other.data_usage) return true;
    return false;
}
bool Phone::operator>=(const Phone& other) const {
    if (data_usage > other.data_usage || data_usage == other.data_usage) return true;
    return false;
}
Watch::Watch(int id, const std::string& brand, int step_count)
    : Device(id, "Watch", brand), step_count(step_count){}
Watch::~Watch() {}
void Watch::print_device() const {
    std::cout<<device_type<<" [ID: "<<device_id<<", Brand: "<<brand<<", Step Count: "<<step_count<<"]\n";
}
bool Watch::operator<(const Watch& other) const {
    if (step_count < other.step_count) return true;
    return false;
}
bool Watch::operator>(const Watch& other) const {
    if (step_count> other.step_count) return true;
    return false;
}
bool Watch::operator<=(const Watch& other) const {
    if (step_count < other.step_count || step_count == other.step_count) return true;
    return false;
}
bool Watch::operator>=(const Watch& other) const {
    if (step_count > other.step_count || step_count == other.step_count) return true;
    return false;
}
Ring::Ring(int id, const std::string& brand, bool sleep_tracking)
    : Device(id, "Ring", brand), sleep_tracking(sleep_tracking){}
Ring::~Ring(){}
void Ring::print_device() const {
    std::cout<<device_type<<" [ID: "<<device_id<<", Brand: "<<brand<<", Sleep Tracking: ";
    if (sleep_tracking) std::cout<<"Enabled]\n";
    else std::cout<<"Disabled]\n";
}
Earbud::Earbud(int id, const std::string& brand, bool noise_cancel)
    : Device(id, "Earbud",brand), noise_cancellation(noise_cancel){}
Earbud::~Earbud(){}
void Earbud::print_device() const {
    std::cout<<device_type<<" [ID: "<<device_id<<", Brand: "<<brand<<", Noise Cancellation: ";
    if (noise_cancellation) std::cout<<"Enabled]\n";
    else std::cout<<"Disabled]\n";
}