//
//  tpDetailViewController.h
//  iOSTestIPadApp
//
//  Created by Maxim Bukshovan on 8/1/13.
//  Copyright (c) 2013 Maxim Bukshovan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tpDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
