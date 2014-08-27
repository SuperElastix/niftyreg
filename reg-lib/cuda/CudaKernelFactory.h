#pragma once
#include "KernelFactory.h"
#include "Context.h"

class Platform;
class KernelImpl;
class CudaKernelFactory : public KernelFactory
{
public:
	KernelImpl* createKernelImpl(std::string name, const Platform& platform, unsigned int dType) const;
};

