//
//  car.m
//  carman
//
//  Created by Siobhan Foster on 7/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "car.h"

@implementation car
@synthesize doors;

- (void) setDoors:(int)anInt{
	if (anInt >= 2)
	{doors= anInt;}
}

- (BOOL) flies
{return NO;}

+ (int) wheels
{return 4;}

- (id)init

{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

@end
