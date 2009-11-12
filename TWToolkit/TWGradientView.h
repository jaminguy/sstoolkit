//
//  TWGradientView.h
//  TWToolkit
//
//  Created by Sam Soffes on 10/27/09.
//  Copyright 2009 Tasteful Works, Inc. All rights reserved.
//
//	Greatly inspired by BWGradientBox. http://brandonwalkin.com/bwtoolkit
//
//	Known bugs:
//	* startColor and endColor must be in the same colorspace. The colorspace 
//	  of the first color is used to draw the gradient. If you did a gradient 
//	  from white to blue, it would look like a gradient from white to black 
//	  because the first color, white, is in the gray color space, not the RGB 
//	  color space. If you did it from blue to white, it would look like blue 
//	  to black because white in the gray colorspace isn't a valid color in 
//	  the RGB colorspace (because there are only 2 components in the gray 
//	  colorspace and 4 in the RGB colorspace). Automatic colorspace 
//	  conversions are planned for the future.
//

#import <UIKit/UIKit.h>

@interface TWGradientView : UIView {
	
	UIColor *topColor;
	UIColor *bottomColor;
	UIColor *topBorderColor;
	UIColor *bottomBorderColor;
	CGFloat topInsetAlpha;
	CGFloat bottomInsetAlpha;	
	BOOL hasTopBorder;
	BOOL hasBottomBorder;
	
	CGGradientRef gradient;
}

@property (nonatomic, retain) UIColor *topColor;
@property (nonatomic, retain) UIColor *bottomColor;
@property (nonatomic, retain) UIColor *topBorderColor;
@property (nonatomic, retain) UIColor *bottomBorderColor;
@property (nonatomic, assign) CGFloat topInsetAlpha;
@property (nonatomic, assign) CGFloat bottomInsetAlpha;	
@property (nonatomic, assign) BOOL hasTopBorder;
@property (nonatomic, assign) BOOL hasBottomBorder;

+ (UIColor *)defaultTopColor;
+ (UIColor *)defaultBottomColor;
+ (UIColor *)defaultTopBorderColor;
+ (UIColor *)defaultBottomBorderColor;
+ (CGFloat)defaultTopInsetAlpha;
+ (CGFloat)defaultBottomInsetAlpha;

@end