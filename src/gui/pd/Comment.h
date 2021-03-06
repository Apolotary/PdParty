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
#import "Widget.h"

@class Gui;

@interface Comment : Widget

+ (id)commentFromAtomLine:(NSArray *)line withGui:(Gui *)gui;

@property (assign, nonatomic) int numForcedLineBreaks; // num line breaks forced by a ; char

@end
