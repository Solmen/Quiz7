//
//  Quiz7MasterViewController.h
//  Quiz7
//
//  Created by Samuel Tolkin on 4/7/14.
//  Copyright (c) 2014 Samuel Tolkin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface Quiz7MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
