//
//  ScrollImageViewController.h
//  Pixiv
//
//  Created by Zhou Hao on 14-10-15.
//  Copyright (c) 2014年 Zhou Hao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScrollImageViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic, readwrite) UIImage *image;

@property (nonatomic) CGFloat lastZoomScale;

- (void)updateConstraints;
- (void)updateZoom;

@end
