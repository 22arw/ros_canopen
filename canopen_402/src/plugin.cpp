#include <class_loader/class_loader.hpp>
#include <canopen_402/motor.h>

canopen::MotorBaseSharedPtr canopen::Motor402_1::Allocator::allocate(const std::string &name, canopen::ObjectStorageSharedPtr storage, const canopen::Settings &settings) {
    return std::make_shared<canopen::Motor402_1>(name, storage, settings);
}

CLASS_LOADER_REGISTER_CLASS(canopen::Motor402_1::Allocator, canopen::MotorBase::Allocator);

canopen::MotorBaseSharedPtr canopen::Motor402_2::Allocator::allocate(const std::string &name, canopen::ObjectStorageSharedPtr storage, const canopen::Settings &settings) {
    return std::make_shared<canopen::Motor402_2>(name, storage, settings);
}

CLASS_LOADER_REGISTER_CLASS(canopen::Motor402_2::Allocator, canopen::MotorBase::Allocator);
