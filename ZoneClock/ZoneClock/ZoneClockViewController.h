//
//  ZoneClockViewController.h
//  ZoneClock
//
//  Created by Siobhan on 7/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZoneClockViewController : UIViewController {
    
	UITextField *estTextFeild;
	UILabel *cstLabel;
	UILabel *pstLabel;

}
@property (nonatomic, retain) IBOutlet UITextField *estTextFeild;
@property (nonatomic, retain) IBOutlet UILabel *cstLabel;
@property (nonatomic, retain) IBOutlet UILabel *pstLabel;

- (IBAction)showTime;

@end
