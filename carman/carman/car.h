//
//  car.h
//  carman
//
//  Created by Siobhan Foster on 7/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface car : NSObject
{
	int doors;
	
}
@property int doors;

- (void) drive;
+ (int) wheels;
- (BOOL) flies;

@end
