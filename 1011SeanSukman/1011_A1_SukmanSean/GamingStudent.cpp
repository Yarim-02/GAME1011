#include "GamingStudent.h"

GamingDevice GamingStudent::getDevice()
{
    return m_device;
}

void GamingStudent::setDevice(int device)
{
    m_device = static_cast<GamingDevice>(device);
}
