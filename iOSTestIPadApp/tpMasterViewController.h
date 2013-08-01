//
//  tpMasterViewController.h
//  iOSTestIPadApp
//
//  Created by Maxim Bukshovan on 8/1/13.
//  Copyright (c) 2013 Maxim Bukshovan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class tpDetailViewController;

#import <CoreData/CoreData.h>

@interface tpMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) tpDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
