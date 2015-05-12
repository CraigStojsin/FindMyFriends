//
//  LogInViewController.h
//  FindMyFriends
//
//  Created by Craig Stojsin on 2015-05-12.
//  Copyright (c) 2015 CraigCode. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LogInViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *userNameTF;
@property (strong, nonatomic) IBOutlet UITextField *passWordTF;
- (IBAction)logInBtn:(id)sender;
- (IBAction)registerBtn:(id)sender;

@end
