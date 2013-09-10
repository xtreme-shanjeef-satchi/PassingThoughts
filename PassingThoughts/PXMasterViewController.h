//
//  PXMasterViewController.h
//  PassingThoughts
//
//  Created by DX050-XL on 2013-09-10.
//  Copyright (c) 2013 Xtreme Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface PXMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
