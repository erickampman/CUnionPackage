//
//  MyUnion.h
//
//
//  Created by Eric Kampman on 4/11/24.
//

#ifndef MyUnion_h
#define MyUnion_h

#include <CoreFoundation/CoreFoundation.h>

typedef struct MyUnion {
	UInt32 	uint32NotInUnion;
	UInt8	uint8ArrayNotInUnion[8];
	
	union {
		struct {
			UInt32 asUInt32;
		} asUInt32;
		struct {
			UInt8 b0;
			UInt8 b1;
			UInt8 b2;
			UInt8 b3;
		} asUInt8;
	} aUnion;
	
} MyUnion;

#endif /* MyUnion_h */
