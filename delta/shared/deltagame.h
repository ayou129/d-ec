#ifndef deltaGAME_H
#define deltaGAME_H

#ifdef _KERNEL_MODE
extern "C" int _fltused;
#endif

#include "delta.h"

//
// features.cpp
//
namespace delta
{
	namespace features
	{
		void run(void);
		void reset(void);
	}
}

//
// implemented by application/driver
//
namespace client
{
	extern void mouse_move(int x, int y);
	extern void mouse1_down(void);
	extern void mouse1_up(void);
	extern void DrawRect(void *hwnd, int x, int y, int w, int h, unsigned char r, unsigned char g, unsigned char b);
	extern void DrawFillRect(void *hwnd, int x, int y, int w, int h, unsigned char r, unsigned char g, unsigned char b);
}

namespace delta
{
	inline void run(void)
	{
		if (delta::running())
		{
			features::run();
		}
		else
		{
			features::reset();
		}
	}
}


#endif // deltaGAME_H

