//
//  SmoothLineView.h
//  Smooth Line View
//
//  Created by Levi Nunnink on 8/15/11.
//  Copyright 2011 culturezoo. All rights reserved.
//
//  modify by Hanson @ Splashtop

#import <UIKit/UIKit.h>

enum
{
	DRAW					= 0x0000,
	CLEAR					= 0x0001,
	ERASE					= 0x0002,
	UNDO					= 0x0003,
	REDO					= 0x0004,
};

@interface SmoothLineView : UIView {
    @private
    
    NSMutableArray *pathArray;
    NSMutableArray *lineArray;
    NSMutableArray *bufferArray;
    NSMutableArray *colorArray;

    
    CGPoint currentPoint;
    CGPoint previousPoint1;
    CGPoint previousPoint2;
    CGFloat lineWidth;
    UIColor *lineColor;
    CGFloat lineAlpha;
    
    UIImage *curImage;    
    
    int drawStep;

}
@property (nonatomic, retain) UIColor *lineColor;
@property (readwrite) CGFloat lineWidth;
@property (readwrite) CGFloat lineAlpha;



- (void)calculateMinImageArea:(CGPoint)pp1 :(CGPoint)pp2 :(CGPoint)cp;
- (void)redoButtonClicked;
- (void)undoButtonClicked;
- (void)clearButtonClicked;
- (void)eraserButtonClicked;

-(void)setColor:(float)r g:(float)g b:(float)b a:(float)a;

@end
