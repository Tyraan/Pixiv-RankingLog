//
//  SDWebScrollImageViewController.h
//  Pixiv
//
//  Created by Zhou Hao on 14-10-15.
//  Copyright (c) 2014年 Zhou Hao. All rights reserved.
//

#import "ScrollImageViewController.h"
#import <SDWebImage/UIImageView+WebCache.h>

@interface SDWebScrollImageViewController : ScrollImageViewController

// setIndex: for download start
@property (nonatomic) NSInteger index;
@property (strong, nonatomic) NSArray *illusts;     // of DB:IllustBase
@property (nonatomic) BOOL showLargeSize;

- (void)simulatePixivRefererAndUserAgent:(NSInteger)illust_id;

// for override
- (NSDictionary *)illustRecordWithIndex:(NSInteger)index;           // call before illust download/preload
- (void)onImageProgress:(NSInteger)receivedSize expectedSize:(NSInteger)expectedSize; // call on image download progress
- (void)onImageDownloaded:(UIImage *)image;                         // call on image downloaded
- (void)realShowImageWithBaseInfo:(NSDictionary *)illust_record;    // call on reloadImage

// when index changed, call this for update
- (void)reloadImage;

// call on single tap
- (void)singleTap:(UITapGestureRecognizer *)sender;
- (void)doubleTap:(UITapGestureRecognizer *)sender;
- (void)leftSwipe:(UITapGestureRecognizer *)sender;
- (void)rightSwipe:(UITapGestureRecognizer *)sender;

@end
