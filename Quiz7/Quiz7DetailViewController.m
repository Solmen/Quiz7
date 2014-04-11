//
//  Quiz7DetailViewController.m
//  Quiz7
//
//  Created by Samuel Tolkin on 4/7/14.
//  Copyright (c) 2014 Samuel Tolkin. All rights reserved.
//

#import "Quiz7DetailViewController.h"

@interface Quiz7DetailViewController ()
- (void)configureView;
@end

@implementation Quiz7DetailViewController
@synthesize dismissBlock;

#pragma mark - Managing the detail item

- (void)setDetailItem:(FETask *)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        [self.taskName setText:[self.detailItem name]];
        [self.slider setValue:[self.detailItem urgency]];
        [self.date setDate:[self.detailItem dueDate]];
        
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self.taskName setDelegate:self];
    [self configureView];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return YES;
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)save:(id)sender
{
    
    [[self view] endEditing:YES];
    [self.detailItem setName:[self.taskName text]];
    [self.detailItem setUrgency:[self.slider value]];
    [self.detailItem setDueDate:[self.date date]];
    
    [self.presentingViewController dismissViewControllerAnimated:NO completion:dismissBlock];
    
}
@end
