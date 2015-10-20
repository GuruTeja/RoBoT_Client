//
//  ViewController.h
//  RoBoT_Client
//
//  Created by Mayanka  on 10/19/15.
//  Copyright © 2015 umkc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import </Users/mayanka/Desktop/GuRu/MaStErS/ReAl TIMe BiGDaTa/PrOjEcT/RoboMe-iOS-SDK/RoboMe.framework/Headers/RoboMe.h>


@interface ViewController : UIViewController //<RoboMeDelegate>

//text to speech
@property (nonatomic, retain) AVSpeechSynthesizer *synthesizer;
@property (nonatomic, assign) float speed;
@property (nonatomic, retain) NSString *voice;


@property (nonatomic, strong) RoboMe *roboMe;

@end

