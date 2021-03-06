/*
 * Copyright (c) 2013 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/PdParty for documentation
 *
 */
#import "IEMWidget.h"

@class Gui;

@interface Slider : IEMWidget

@property (assign, nonatomic) WidgetOrientation orientation;
@property (assign, nonatomic) BOOL log; // linear or logarithmic scale?
@property (assign, nonatomic) BOOL steady; // steady on click?

+ (id)sliderFromAtomLine:(NSArray *)line withOrientation:(WidgetOrientation)orientation withGui:(Gui *)gui;

@end
