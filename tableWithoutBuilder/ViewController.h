//
//  ViewController.h
//  tableWithoutBuilder
//
//  Created by Pavel Salkevich on 14.10.15.
//  Copyright © 2015 Pavel Salkevich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, strong)NSString *temp;
@property (weak, nonatomic) IBOutlet UILabel *myLabel;

@end

