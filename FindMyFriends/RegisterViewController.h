//
//  RegisterViewController.h
//  FindMyFriends
//
//  Created by Craig Stojsin on 2015-05-12.
//  Copyright (c) 2015 CraigCode. All rights reserved.
//

#import <UIKit/UIKit.h>
@class  RegisterViewController;

@protocol RegisterViewControllerDelegate <NSObject>
-(void)registerViewControllerDidSignup:(RegisterViewController *)controller;

@end


@interface RegisterViewController : UIViewController

@property (nonatomic, weak) id<RegisterViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *registerUsernameTF;
@property (strong, nonatomic) IBOutlet UITextField *registerPasswordTF;
@property (strong, nonatomic) IBOutlet UITextField *passwordAgain;
- (IBAction)rLoginBtn:(id)sender;



@end
