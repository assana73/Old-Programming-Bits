//
//  booksAppDelegate.h
//  books
//
//  Created by Siobhan Foster on 8/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class booksViewController;

@interface booksAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet booksViewController *viewController;

@end
