//
//  NewCommentViewCell.h
//  joindinapp
//
//  Created by Kevin on 11/01/2010.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NewCommentViewCell : UITableViewCell {
	IBOutlet UIButton *uiSubmit;
	IBOutlet UITextView *uiComment;
	IBOutlet UIActivityIndicatorView *uiActivity;
	IBOutlet UIButton *uiRating1;
	IBOutlet UIButton *uiRating2;
	IBOutlet UIButton *uiRating3;
	IBOutlet UIButton *uiRating4;
	IBOutlet UIButton *uiRating5;
	
	NSUInteger rating;
	
	id commentDelegate;
}

@property (nonatomic, retain) UIButton *uiSubmit;
@property (nonatomic, retain) UITextView *uiComment;
@property (nonatomic, retain) UIActivityIndicatorView *uiActivity;
@property (nonatomic, retain) id commentDelegate;
@property (nonatomic, retain) UIButton *uiRating1;
@property (nonatomic, retain) UIButton *uiRating2;
@property (nonatomic, retain) UIButton *uiRating3;
@property (nonatomic, retain) UIButton *uiRating4;
@property (nonatomic, retain) UIButton *uiRating5;
@property (nonatomic, assign) NSUInteger rating;

- (IBAction) uiSubmitted:(id)sender;
- (IBAction) uiRatingPressed:(id)sender;

@end

@protocol CommentSubmitter
- (void)submitComment:(NSString *)comment  activityIndicator:(UIActivityIndicatorView *)activity rating:(NSUInteger)rating;
@end
