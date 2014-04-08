//
//  Quiz7DetailViewController.h
//  Quiz7
//
//  Created by Samuel Tolkin on 4/7/14.
//  Copyright (c) 2014 Samuel Tolkin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FETask.h"

@interface Quiz7DetailViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) FETask *detailItem;
- (IBAction)save:(id)sender;
@property (weak, nonatomic) IBOutlet UIDatePicker *date;
@property (weak, nonatomic) IBOutlet UITextField *taskName;
@property (weak, nonatomic) IBOutlet UISlider *slider;
@property (nonatomic, copy) void (^dismissBlock)(void);
@end
