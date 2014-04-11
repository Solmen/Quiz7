//
//  FETask.h
//  Quiz7
//
//  Created by Samuel Tolkin on 4/11/14.
//  Copyright (c) 2014 Samuel Tolkin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface FETask : NSManagedObject

@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSString * name;
@property (nonatomic) float urgency;

@end
