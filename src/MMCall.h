//
//  MMCall.h
//  MiuMiu
//
//  Created by Peter Zion on 10/10/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMDataProducer.h"
#import "MMDataConsumer.h"

@class MMCall;

@protocol MMCallDelegate <NSObject>

@required

-(void) callDidBegin:(MMCall *)call;
-(void) callDidBeginRinging:(MMCall *)call;
-(void) callDidAnswer:(MMCall *)call;
-(void) callDidEnd:(MMCall *)call;

@end

@interface MMCall : MMDataProducer <MMDataConsumer>
{
@protected
	id <MMCallDelegate> delegate;
}

-(void) sendDTMF:(NSString *)dtmf;
-(void) end;

@property ( nonatomic, assign ) <MMCallDelegate> delegate;

@end