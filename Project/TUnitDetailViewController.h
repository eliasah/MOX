//
//  TUnitDetailViewController.h
//  Project
//
//  Created by Elias Abou Haydar on 09/01/14.
//  Copyright (c) 2014 Elias Abou Haydar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TUnit.h"

@interface TUnitDetailViewController : UIViewController

@property (strong, nonatomic) TUnit *tunit;
@property (weak, nonatomic) IBOutlet UILabel *cmTime;
@property (weak, nonatomic) IBOutlet UILabel *tpTime;
@property (weak, nonatomic) IBOutlet UILabel *tdTime;


@end
