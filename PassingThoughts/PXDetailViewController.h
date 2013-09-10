//
//  PXDetailViewController.h
//  PassingThoughts
//
//  Created by DX050-XL on 2013-09-10.
//  Copyright (c) 2013 Xtreme Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PXDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
