#include<windows.h>

//Header files
#include<iostream>
#include<time.h>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<thread>
//To make clrscr workable
#define clrscr() system("cls");
//inline void clrscr() { system("cls"); }

void replace();
int start();
using namespace std;

void setcolor(int ForgC) //function to change setcolor
 {
 	WORD wColor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
	if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 	{
                 //Mask out all but the background attribute, and add in the forgournd color
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
 	}
 return;
 }

//variables
class varb
{
	public:
		
	int ff=0,tms=900000,difrnc=0,tdifrnc=0,ale=0;
	char vv[5];
	char ch=' ';
	float diff=0,speed=0;
	long fspeed=0;
	int tim=5000;
	
	int count=0,chh,cl,cn=0,k;
	char mmstory[100]="                                                       ";
	char mstory[12000]="                                                       ";
//	char st1[5000]="Hello Dear";
	char st1[5700]="First Mrs. Parker would show you the double parlours. You would not dare to interrupt her description of their advantages and of the merits of the gentleman who had occupied them for eight years. Then you would manage to stammer forth the confession that you were neither a doctor nor a dentist. Mrs. Parker's manner of receiving the admission was such that you could never afterward entertain the same feeling toward your parents, who had neglected to train you up in one of the professions that fitted Mrs. Parker's parlours. Next you ascended one flight of stairs and looked at the second floor back at $8. Convinced by her second-floor manner that it was worth the $12 that Mr. Toosenberry always paid for it until he left to take charge of his brother's orange plantation in Florida near Palm Beach, where Mrs. McIntyre always spent the winters that had the double front room with private bath, you managed to babble that you wanted something still cheaper. If you survived Mrs. Parker's scorn, you were taken to look at Mr. Skidder's large hall-room on the third floor. Mr. Skidder's room was not vacant. He wrote plays and smoked cigarettes in it all day long. But every room-hunter was made to visit his room to admire the lambrequins. After each visit, Mr. Skidder, from the fright caused by possible eviction, would pay something on his rent. Then - oh, then - if you still stood on one foot with your hot hand clutching the three moist dollars in your pocket, and hoarsely proclaimed your hideous and culpable poverty, nevermore would Mrs. Parker be cicerone of yours. She would honk loudly the word 'Clara,' she would show you her back, and march downstairs. Then Clara, the coloured maid, would escort you up the carpeted ladder that served for the fourth flight, and show you the Skylight Room. It occupied 7 by 8 feet of floorspace at the middle of the hall. On each side of it was a dark lumber closet or store-room. In it was an iron cot, a washstand and a chair. A shelf was the dresser. Its four bare walls seemed to close in upon you like the sides of a coin. Your hand crept to your throat, you gasped, you looked up as from a well - and breathed once more. Through the glass of the little skylight you saw a square of blue infinity. 'Two dollars, suh,' Clara would say in her half-contemptuous, half-Tuskegeenial tones. One day Miss Leeson came hunting for a room. She carried a typewriter made to be lugged around by a much larger lady. She was a very little girl, with eyes and hair that kept on growing after she had stopped and that always looked as if they were saying: 'Goodness me. Why didn't you keep up with us?' Mrs. Parker showed her the double parlours. 'In this closet,' she said, 'one could keep a skeleton or anaesthetic or coal - ' 'But I am neither a doctor nor a dentist,' said Miss Leeson with a shiver. Mrs. Parker gave her the incredulous, pitying, sneering, icy stare that she kept for those who failed to qualify as doctors or dentists, and led the way to the second floor back. 'Eight dollars?' said Miss Leeson. 'Dear me! I'm not Hetty if I do look green. I'm just a poor little working girl. Show me something higher and lower.' Mr. Skidder jumped and strewed the floor with cigarette stubs at the rap on his door. 'Excuse me, Mr. Skidder,' said Mrs. Parker, with her demon's smile at his pale looks. 'I didn't know you were in. I asked the lady to have a look at your lambrequins.' 'They're too lovely for anything,' said Miss Leeson, smiling in exactly the way the angels do. After they had gone Mr. Skidder got very busy erasing the tall, black-haired heroine from his latest (unproduced) play and inserting a small, roguish one with heavy, bright hair and vivacious features. 'Anna Held'll jump at it,' said Mr. Skidder to himself, putting his feet up against the lambrequins and disappearing in a cloud of smoke like an aerial cuttlefish. Presently the tocsin call of 'Clara!' sounded to the world the state of Miss Leeson's purse. A dark goblin seized her, mounted a Stygian stairway, thrust her into a vault with a glimmer of light in its top and muttered the menacing and cabalistic words 'Two dollars!' 'I'll take it!' sighed Miss Leeson, sinking down upon the squeaky iron bed. Every day Miss Leeson went out to work. At night she brought home papers with handwriting on them and made copies with her typewriter. Sometimes she had no work at night, and then she would sit on the steps of the high stoop with the other roomers. Miss Leeson was not intended for a skylight room when the plans were drawn for her creation. She was gay-hearted and full of tender, whimsical fancies. Once she let Mr. Skidder read to her three acts of his great (unpublished) comedy, 'It's No Kid; or, The Heir of the Subway.' There was rejoicing among the gentlemen roomers whenever Miss Leeson had time to sit on the steps for an hour or two. But Miss Longnecker, the tall blonde who taught in a public school and said 'Well, really!' to everything you said, sat on the top step and sniffed. And Miss Dorn, who shot at the moving ducks at Coney every Sunday and worked in a department store, sat on the bottom step and sniffed. Miss Leeson sat on the middle step, and the men would quickly group around her. Especially Mr. Skidder, who had cast her in his mind for the star part in a private, romantic (unspoken) drama in real life. And especially Mr. Hoover, who was forty-five, fat, flushed and foolish. And especially very young Mr. Evans, who set up a hollow cough to induce her to ask him to leave off cigarettes. The men voted her 'the funniest and jolliest ever,' but the sniffs on the top step and the lower step were implacable.";
	char st2[6700]="When one loves ones art no service seems too hard. That is our premise. This story shall draw a conclusion from it, and show at the same time that the premise is incorrect. That will be a new thing in logic, and a feat in story-telling somewhat older than the Great Wall of China. Joe Larrabee came out of the post-oak flats of the Middle West pulsing with a genius for pictorial art. At six he drew a picture of the town pump with a prominent citizen passing it hastily. This effort was framed and hung in the drug store window by the side of the ear of corn with an uneven number of rows. At twenty he left for New York with a flowing necktie and a capital tied up somewhat closer. Delia Caruthers did things in six octaves so promisingly in a pine-tree village in the South that her relatives chipped in enough in her chip hat for her to go 'North' and 'finish.' They could not see her f -, but that is our story Joe and Delia met in an atelier where a number of art and music students had gathered to discuss chiaroscuro, Wagner, music, Rembrandt's works pictures, Waldteufel, wall-paper, Chopin, and Oolong. Joe and Delia became enamoured one of the other or each of the other, as you please, and in a short time were married - for (see above), when one loves one's Art no service seem too hard. Mr. and Mrs. Larrabee began housekeeping in a flat. It was a lonesome flat - something like the A sharp way down at the lefthand end of the keyboard. And they were happy; for they had their Art and they had each other. And my advice to the rich young man would be - sell all thou hast, and give it to the poor - janitor for the privilege of living in a flat with your Art and your Delia. Flat-dwellers shall endorse my dictum that theirs is the only true happiness. If a home is happy it cannot fit too close - let the dresser collapse and become a billiard table; let the mantel turn to a rowing machine, the escritoire to a spare bedchamber, the washstand to an upright piano; let the four walls come together, if they will, so you and your Delia are between. But if home be the other kind, let it be wide and long - enter you at the Golden Gate, hang your hat on Hatteras, your cape on Cape Horn, and go out by Labrador. Joe was painting in the class of the great Magister - you know his fame. His fees are high; his lessons are light - his high-lights have brought him renown. Delia was studying under Rosenstock you know his repute as a disturber of the piano keys. They were mighty happy as long as their money lasted. So is every - but I will not be cynical. Their aims were very clear and defined. Joe was to become capable very soon of turning out pictures that old gentlemen with thin side-whiskers and thick pocketbooks would sandbag one another in his studio for the privilege of buying. Delia was to become familiar and then contemptuous with Music, so that when she saw the orchestra seats and boxes unsold she could have sore throat and lobster in a private dining-room and refuse to go on the stage. But the best, in my opinion, was the home life in the little flat the ardent, voluble chats after the day's study; the cosy dinners and fresh, light breakfasts; the interchange of ambitions - ambitions interwoven each with the other's or else inconsiderable - the mutual help and inspiration; and - overlook my artlessness stuffed olives and cheese sandwiches at 11p.m. But after awhile Art flagged. It sometimes does, even if some switchman doesn't flag it. Everything going out and nothing coming in, as the vulgarians say. Money was lacking to pay Mr. Magister and Herr Rosenstock their prices. When one loves one's Art no service seems too hard. So, Delia said she must give music lessons to keep the chafing dish bubbling. For two or three days she went out canvassing for pupils. One evening she came home elated. 'Joe, dear,' she said gleefully, 'I've a pupil. And, oh, the loveliest people! General - General A. B. Pinkney's daughter - on Seventyfirst Street. Such a splendid house, Joe - you ought to see the front door! Byzantine I think you would call it. And inside! Oh, Joe, I never saw anything like it before. 'My pupil is his daughter Clementina. I dearly love her already. She's a delicate thing - dresses always in white; and the sweetest, simplest manners! Only eighteen years old. I'm to give three lessons a week; and, just think, Joe! $5 a lesson. I don't mind it a bit; for when I get two or three more pupils I can resume my lessons with Herr Rosenstock. Now, smooth out that wrinkle between your brows, dear, and let's have a nice supper.' 'That's all right for you, Dele,' said Joe, attacking a can of peas with a carving knife and a hatchet, 'but how about me? Do you think I'm going to let you hustle for wages while I philander in the regions of high art? Not by the bones of Benvenuto Cellini! I guess I can sell papers or lay cobblestones, and bring in a dollar or two.' Delia came and hung about his neck. 'Joe, dear, you are silly. You must keep on at your studies. It is not as if I had quit my music and gone to work at something else. While I teach I learn. I am always with my music. And we can live as happily as millionaires on $15 a week. You mustn't think of leaving Mr. Magister.' 'All right,' said Joe, reaching for the blue scalloped vegetable dish. 'But I hate for you to be giving lessons. It isn't Art. But you're a trump and a dear to do it.' 'When one loves one's Art no service seems too hard,' said Delia. 'Magister praised the sky in that sketch I made in the park,' said Joe. 'And Tinkle gave me permission to hang two of them in his window. I may sell one if the right kind of a moneyed idiot sees them.' 'I'm sure you will,' said Delia sweetly. 'And now let's be thankful for General Pinkney and this veal roast.' During all of the next week the Larrabees had an early breakfast. Joe was enthusiastic about some morning-effect sketches he was doing in Central Park, and Delia packed him off breakfasted, coddled, praised, and kissed at seven o'clock. Art is an engaging mistress. It was most times seven o'clock when he returned in the evening. At the end of the week Delia, sweetly proud but languid, triumphantly tossed three five-dollar bills on the 8 by 10 (inches) centre table of the 8 by 10 (feet) flat parlour. 'Sometimes,' she said, a little wearily, 'Clementina tries me. I'm afraid she doesn't practise enough, and I have to tell her the same things so often. And then she always dresses entirely in white, and that does get monotonous. But General Pinkney is the dearest old man! I wish you could know him, Joe. He comes in sometimes ";
	char st3[6800]="On his bench in madison square Soapy moved uneasily. When wild goose honk high of nights, and when women without sealskin coats grow kind to their husbands, and when Soapy moves uneasily on his bench in the park, you may know that winter is near at hand. A dead leaf fell in Soapy's lap. That was Jack Frost's card. Jack is kind to the regular denizens of Madison Square, and gives fair warning of his annual call. At the corners of four streets he hands his pasteboard to the North Wind, footman of the mansion of All Outdoors, so that the inhabitants thereof may make ready. Soapy's mind became cognizant of the fact that the time had come for him to resolve himself into a singular Committee of Ways and Means to provide against the coming rigour. And therefore he moved uneasily on his bench. The hibernatorial ambitions of Soapy were not of the highest. In them were no considerations of Mediterranean cruises, of soporific Southern skies or drifting in the Vesuvian Bay. Three months on the Island was what his soul craved. Three months of assured board and bed and congenial company, safe from Boreas and bluecoats, seemed to Soapy the essence of things desirable. For years the hospitable Blackwell's had been his winter quarters. Just as his more fortunate fellow New Yorkers had bought their tickets to Palm Beach and the Riviera each winter, so Soapy had made his humble arrangements for his annual hegira to the Island. And now the time was come. On the previous night three Sabbath newspapers, distributed beneath his coat, about his ankles and over his lap, had failed to repulse the cold as he slept on his bench near the spurting fountain in the ancient square. So the Island loomed large and timely in Soapy's mind. He scorned the provisions made in the name of charity for the city's dependents. In Soapy's opinion the Law was more benign than Philanthropy. There was an endless round of institutions, municipal and eleemosynary, on which he might set out and receive lodging and food accordant with the simple life. But to one of Soapy's proud spirit the gifts of charity are encumbered. If not in coin you must pay in humiliation of spirit for every benefit received at the hands of philanthropy. As Caesar had his Brutus, every bed of charity must have its toll of a bath, every loaf of bread its compensation of a private and personal inquisition. Wherefore it is better to be a guest of the law, which, though conducted by rules, does not meddle unduly with a gentleman's private affairs. Soapy, having decided to go to the Island, at once set about accomplishing his desire. There were many easy ways of doing this. The pleasantest was to dine luxuriously at some expensive restaurant; and then, after declaring insolvency, be handed over quietly and without uproar to a policeman. An accommodating magistrate would do the rest. Soapy left his bench and strolled out of the square and across the level sea of asphalt, where Broadway and Fifth Avenue flow together, Up Broadway he turned, and halted at a glittering café, where are gathered together nightly the choicest products of the grape, the silkworm and the protoplasm. Soapy had confidence in himself from the lowest button of his vest upward. He was shaven, and his coat was decent and his neat black, ready-tied four-in-hand had been presented to him by a lady missionary on Thanksgiving Day. If he could reach a table in the restaurant unsuspected success would be his. The portion of him that would show above the table would raise no doubt in the waiter's mind. A roasted mallard duck, thought Soapy, would be about the thing - with a bottle of Chablis, and then Camembert, a demi-tasse and a cigar. One dollar for the cigar would be enough. The total would not be so high as to call forth any supreme manifestation of revenge from the café management; and yet the meat would leave him filled and happy for the journey to his winter refuge. But as Soapy set foot inside the restaurant door the head waiter's eye fell upon his frayed trousers and decadent shoes. Strong and ready hands turned him about and conveyed him in silence and haste to the sidewalk and averted the ignoble fate of the menaced mallard. Soapy turned off Broadway. It seemed that his route to the coveted Island was not to be an epicurean one. Some other way of entering limbo must be thought of. At a corner of Sixth Avenue electric lights and cunningly displayed wares behind plate-glass made a shop window conspicuous. Soapy took a cobblestone and dashed it through the glass. People came running round the corner, a policeman in the lead. Soapy stood still, with his hands in his pockets, and smiled at the sight of brass buttons. 'Where's the man that done that?' inquired the officer excitedly. 'Don't you figure out that I might have had something to do with it?' said Soapy, not without sarcasm, but friendly, as one greets good fortune. The policeman's mind refused to accept Soapy even as a clue. Men who smash windows do not remain to parley with the law's minions. They take to their heels. The policeman saw a man halfway down the block running to catch a car. With drawn club he joined in the pursuit. Soapy, with disgust in his heart, loafed along, twice unsuccessful. On the opposite side of the street was a restaurant of no great pretensions. It catered to large appetites and modest purses. Its crockery and atmosphere were thick; its soup and napery thin. Into this place Soapy took his accusive shoes and tell-tale trousers without challenge. At a table he sat and consumed beefsteak, flapjacks, doughnuts and pie. And then to the waiter he betrayed the fact that the minutest coin and himself were strangers. 'Now, get busy and call a cop,' said Soapy. 'And don't keep a gentleman waiting.' 'No cop for youse,' said the waiter, with a voice like butter cakes and an eye like the cherry in a Manhattan cocktail. 'Hey, Con!' Neatly upon his left ear on the callous pavement two waiters pitched Soapy. He arose, joint by joint, as a carpenter's rule opens, and beat the dust from his clothes. Arrest seemed but a rosy dream. The Island seemed very far away. A policeman who stood before a drug store two doors away laughed and walked down the street. Five blocks Soapy travelled before his courage permitted him to woo capture again. This time the opportunity presented what he fatuously termed to himself a 'cinch.' A young woman of a modest and pleasing guise was standing before a show window gazing with sprightly interest at its display of shaving mugs and inkstands, and two yards from the window a large policeman of severe demeanour leaned against a water-plug. It was Soapy's design to assume the role of the despicable and execrated 'masher.' The refined and elegant appearance of his ";
	char st4[9600]="I don't suppose it will knock any of you people off your perch to read a contribution from an animal. Mr. Kipling and a good many others have demonstrated the fact that animals can express themselves in remunerative English, and no magazine goes to press nowadays without an animal story in it, except the old-style monthlies that are still running pictures of Bryan and the Mont Pelée horror. But you needn't look for any stuck-up literature in my piece, such as Bearoo, the bear, and Snakoo, the snake, and Tammanoo, the tiger, talk in the jungle books. A yellow dog that's spent most of his life in a cheap New York flat, sleeping in a corner on an old sateen underskirt (the one she spilled port wine on at the Lady Longshoremen's banquet), mustn't be expected to perform any tricks with the art of speech. I was born a yellow pup; date, locality, pedigree and weight unknown. The first thing I can recollect, an old woman had me in a basket at Broadway and Twenty-third trying to sell me to a fat lady. Old Mother Hubbard was boosting me to beat the band as a genuine Pomeranian-Hambletonian-Red-Irish-Cochin-ChinaStoke-Pogis fox terrier. The fat lady chased a V around among the samples of gros grain flannelette in her shopping-bag till she cornered it, and gave up. From that moment I was a pet - a mamma's own wootsey squidlums. Say, gentle reader, did you ever have a 200-pound woman breathing a flavour of Camembert cheese and Peau d'Espagne pick you up and wallop her nose all over you, remarking all the time in an Emma Eames tone of voice: 'Oh, oo's um oodlum, doodlum, woodlum, toodlum, bitsy-witsy skoodlums?' From a pedigreed yellow pup I grew up to be an anonymous yellow cur looking like a cross between an Angora cat and a box of lemons. But my mistress never tumbled. She thought that the two primeval pups that Noah chased into the ark were but a collateral branch of my ancestors. It took two policemen to keep her from entering me at the Madison Square Garden for the Siberian bloodhound prize. I'll tell you about that flat. The house was the ordinary thing in New York, paved with Parian marble in the entrance hall and cobblestones above the first floor. Our flat was three fl - well, not flights - climbs up. My mistress rented it unfurnished, and put in the regular things - 1903 antique upholstered parlour set, oil chromo of geishas in a Harlem tea-house, rubber plant and husband. By Sirius! there was a biped I felt sorry for. He was a little man with sandy hair and whiskers a good deal like mine. Hen-pecked? - well, toucans and flamingoes and pelicans all had their bills in him. He wiped the dishes and listened to my mistress tell about the cheap, ragged things the lady with the squirrel-skin coat on the second floor hung out on her line to dry. And every evening while she was getting supper she made him take me out on the end of a string for a walk. If men knew how women pass the time when they are alone they'd never marry. Laura Lean Jibbey, peanut brittle, a little almond cream on the neck muscles, dishes unwashed, half an hour's talk with the iceman, reading a package of old letters, a couple of pickles and two bottles of malt extract, one hour peeking through a hole in the window shade into the flat across the airshaft - that's about all there is to it. Twenty minutes before time for him to come home from work she straightens up the house, fixes her rat so it won't show, and gets out a lot of sewing for a ten-minute bluff. I led a dog's life in that flat. 'Most all day I lay there in my corner watching the fat woman kill time. I slept sometimes and had pipe dreams about being out chasing cats into basements and growling at old ladies with black mittens, as a dog was intended to do. Then she would pounce upon me with a lot of that drivelling poodle palaver and kiss me on the nose - but what could I do? A dog can't chew cloves. I began to feel sorry for Hubby, dog my cats if I didn't. We looked so much alike that people noticed it when we went out; so we shook the streets that Morgan's cab drives down, and took to climbing the piles of last December's snow on the streets where cheap people live. One evening when we were thus promenading, and I was trying to look like a prize St. Bernard, and the old man was trying to look like he wouldn't have murdered the. first organ-grinder he heard play Mendelssohn's wedding-march, I looked up at him and said, in my way: 'What are you looking so sour about, you oakum trimmed lobster? She don't kiss you. You don't have to sit on her lap and listen to talk that would make the book of a musical comedy sound like the maxims of Epictetus. You ought to be thankful you're not a dog. Brace up, Benedick, and bid the blues begone.' The matrimonial mishap looked down at me with almost canine intelligence in his face. 'Why, doggie,' says he, 'good doggie. You almost look like you could speak. What is it, doggie - Cats?' Cats! Could speak! But, of course, he couldn't understand. Humans were denied the speech of animals. The only common ground of communication upon which dogs and men can get together is in fiction. In the flat across the hall from us lived a lady with a black-andtan terrier. Her husband strung it and took it out every evening, but he always came home cheerful and whistling. One day I touched noses with the black-and-tan in the hall, and I struck him for an elucidation. 'See, here, Wiggle-and-Skip,' I says, 'you know that it ain't the nature of a real man to play dry-nurse to a dog in public. I never saw one leashed to a bow-wow yet that didn't look like he'd like to lick every other man that looked at him. But your boss comes in every day as perky and set up as an amateur prestidigitator doing the egg trick. How does he do it? Don't tell me he likes it.' 'Him?' says the black-and-tan. 'Why, he uses Nature's Own Remedy. He gets spifflicated. At first when we go out he's as shy as the man on the steamer who would rather play pedro when they make 'em all jackpots. By the time we've been in eight saloons he don't care whether the thing on the end of his line is a dog or a catfish. I've lost two inches of my tail trying to sidestep those swinging doors.' The pointer I got from that terrier - vaudeville please copy - set me to thinking. One evening about six o'clock my mistress ordered him to get busy and do the ozone act for Lovey. I have concealed it until now, but that is what she called me. The black-and-tan was called 'Tweetness.' I consider that I have the bulge on him as far as you could chase a rabbit. Still 'Lovey' is something of a nomenclatural tin-can on the tail of one's self-respect. At a quiet place on a safe street I tightened the line of my custodian in front of an attractive, refined saloon. I made a dead-ahead scramble for the doors, whining like a dog in the press despatches that lets the family know that little Alice is bogged while gathering lilies in the brook. 'Why, darn my eyes,' says the old man, with a grin; 'darn my eyes if the saffron-coloured son of a seltzer lemonade ain't asking me in to take a drink. Lemme see - how long's it been since I saved shoe leather by keeping one foot on the footrest? I believe I'll - ' I knew I had him. Hot Scotches he took, sitting at a table. For an hour he kept the Campbells coming. I sat by his side rapping for the waiter with my tail, and eating free lunch such as mamma in her flat never equalled with her homemade truck bought at a delicatessen store eight minutes before papa comes home. When the products of Scotland were all exhausted except the rye bread the old man unwound me from the table leg and played me outside like a fisherman plays a salmon. Out there he took off my collar and threw it into the street. 'Poor doggie,' says he; 'good doggie. She shan't kiss you any more. 'S a darned shame. Good doggie, go away and get run over by a street car and be happy.' I refused to leave. I leaped and frisked around the old man's legs happy as a pug on a rug. 'You old flea-headed woodchuck-chaser,' I said to him - 'you moon-baying, rabbit-pointing, egg-stealing old beagle, can't you see that I don't want to leave you? Can't you see that we're both Pups in the Wood and the missis is the cruel uncle after you with the dish towel and me with the flea liniment and a pink bow to tie on my tail. Why not cut that all out and be pards for evermore?' Maybe you'll say he didn't understand - maybe he didn't. But he kind of got a grip on the Hot Scotches, and stood still for a minute, thinking. 'Doggie,' says he finally, 'we don't live more than a dozen lives on this earth, and very few of us live to be more than 300. If I ever see that flat any more I'm a flat, and if you do you're flatter; and that's no flattery. I'm offering 60 to 1 that Westward Ho wins out by the length of a dachshund.' There was no string, but I frolicked along with my master to the Twenty-third Street ferry. And the cats on the route saw reason to give thanks that prehensile claws had been given them. On the Jersey side my master said to a stranger who stood eating a currant bun: 'Me and my doggie, we are bound for the Rocky Mountains.' But what pleased me most was when my old man pulled both of my ears until I howled, and said: 'You common, monkey-headed, rat-tailed, sulphur-coloured son of a door-mat, do you know what I'm going to call you?' I thought of 'Lovey,' and I whined dolefully. 'I'm going to call you 'Pete,' ' says my master; and if I'd had five tails I couldn't have done enough wagging to do justice to the occasion.";
	char st5[10400]="Restless, shifting, fugacious as time itself, is a certain vast bulk of the population of the redbrick district of the lower West Side. Homeless, they have a hundred homes. They flit from furnished room to furnished room, transients for ever - transients in abode, transients in heart and mind. They sing 'Home Sweet Home' in ragtime; they carry their lares et penates in a bandbox; their vine is entwined about a picture hat; a rubber plant is their fig tree. Hence the houses of this district, having had a thousand dwellers, should have a thousand tales to tell, mostly dull ones, no doubt; but it would be strange if there could not be found a ghost or two in the wake of all these vagrant ghosts. One evening after dark a young man prowled among these crumbling red mansions, ringing their bells. At the twelfth he rested his lean hand-baggage upon the step and wiped the dust from his hat-band and forehead. The bell sounded faint and far away in some remote, hollow depths. To the door of this, the twelfth house whose bell he had rung, came a housekeeper who made him think of an unwholesome, surfeited worm that had eaten its nut to a hollow shell and now sought to fill the vacancy with edible lodgers. He asked if there was a room to let. 'Come in,' said the housekeeper. Her voice came from her throat; her throat seemed lined with fur. 'I have the third floor back, vacant since a week back. Should you wish to look at it?' The young man followed her up the stairs. A faint light from no particular source mitigated the shadows of the halls. They trod noiselessly upon a stair carpet that its own loom would have forsworn. It seemed to have become vegetable; to have degenerated in that rank, sunless air to lush lichen or spreading moss that grew in patches to the staircase and was viscid under the foot like organic matter. At each turn of the stairs were vacant niches in the wall. Perhaps plants had once been set within them. If so they had died in that foul and tainted air. It may be that statues of the saints had stood there, but it was not difficult to conceive that imps and devils had dragged them forth in the darkness and down to the unholy depths of some furnished pit below. 'This is the room,' said the housekeeper, from her furry throat. 'It's a nice room. It ain't often vacant. I had some most elegant people in it last summer - no trouble at all, and paid in advance to the minute. The water's at the end of the hall. Sprowls and Mooney-kept it three months. They done a vaudeville sketch. Miss B'retta Sprowls - you may have heard of her - Oh, that was just the stage names - right there over the dresser is where the marriage certificate hung, framed. The gas is here, and you see there is plenty of closet room. It's a room everybody likes. It never stays idle long.' 'Do you have many theatrical people rooming here?' asked the young man. 'They comes and goes. A good proportion of my lodgers is connected with the theatres. Yes, sir, this is the theatrical district. Actor people never stays long anywhere. I get my share. Yes, they comes and they goes.' He engaged the room, paying for a week in advance. He was tired, he said, and would take possession at once. He counted out the money. The room had been made ready, she said, even to towels and water. As the housekeeper moved away he put, for the thousandth time, the question that he carried at the end of his tongue. 'A young girl - Miss Vashner - Miss Eloise Vashner - do you remember such a one among your lodgers? She would be singing on the stage, most likely. A fair girl, of medium height and slender, with reddish gold hair and a dark mole near her left eyebrow.' 'No, I don't remember the name. Them stage people has names they change as often as their rooms. They comes and they goes. No, I don't call that one to mind.' No. Always no. Five months of ceaseless interrogation and the inevitable negative. So much time spent by day in questioning managers, agents, schools and choruses; by night among the audiences of theatres from all-star casts down to music-halls so low that he dreaded to find what he most hoped for. He who had loved her best had tried to find her. He was sure that since her disappearance from home this great water-girt city held her somewhere, but it was like a monstrous quicksand, shifting its particles constantly, with no foundation, its upper granules of to-day buried to-morrow in ooze and slime. The furnished room received its latest guest with a first glow of pseudo-hospitality, a hectic, haggard, perfunctory welcome like the specious smile of a demirep. The sophistical comfort came in reflected gleams from the decayed furniture, the ragged brocade upholstery of a couch and two chairs, a footwide cheap pier glass between the two windows, from one or two gilt picture frames and a brass bedstead in a corner. The guest reclined, inert, upon a chair, while the room, confused in speech as though it were an apartment in Babel, tried to discourse to him of its divers tenantry. A polychromatic rug like some brilliant-flowered, rectangular, tropical islet lay surrounded by a billowy sea of soiled matting. Upon the gay-papered wall were those pictures that pursue the homeless one from house to house - The Huguenot Lovers, The First Quarrel, The Wedding Breakfast, Psyche at the Fountain. The mantel's chastely severe outline was ingloriously veiled behind some pert drapery drawn rakishly askew like the sashes of the Amazonian ballet. Upon it was some desolate flotsam cast aside by the room's marooned when a lucky sail had borne them to a fresh port - a trifling vase or two, pictures of actresses, a medicine bottle, some stray cards out of a deck. One by one, as the characters of a cryptograph become explicit, the little signs left by the furnished room's procession of guests developed a significance. The threadbare space in the rug in front of the dresser told that lovely woman had marched in the throng. Tiny finger-prints on the wall spoke of little prisoners trying to feel their way to sun and air. A splattered stain, raying like the shadow of a bursting bomb, witnessed where a hurled glass or bottle had splintered with its contents against the wall. Across the pier glass had been scrawled with a diamond in staggering letters the name 'Marie.' It seemed that the succession of dwellers in the furnished room had turned in fury - perhaps tempted beyond forbearance by its garish coldness - and wreaked upon it their passions. The furniture was chipped and bruised; the couch, distorted by bursting springs, seemed a horrible monster that had been slain during the stress of some grotesque convulsion. Some more potent upheaval had cloven a great slice from the marble mantel. Each plank in the floor owned its particular cant and shriek as from a separate and individual agony. It seemed incredible that all this malice and injury had been wrought upon the room by those who had called it for a time their home; and yet it may have been the cheated home instinct surviving blindly, the resentful rage at false household gods that had kindled their wrath. A hut that is our own we can sweep and adorn and cherish. The young tenant in the chair allowed these thoughts to file, soft-shod, through his mind, while there drifted into the room furnished sounds and furnished scents. He heard in one room a tittering and incontinent, slack laughter; in others the monologue of a scold, the rattling of dice, a lullaby, and one crying dully; above him a banjo tinkled with spirit. Doors banged somewhere; the elevated trains roared intermittently; a cat yowled miserably upon a back fence. And he breathed the breath of the house - a dank savour rather than a smell - a cold, musty effluvium as from underground vaults mingled with the reeking exhalations of linoleum and mildewed and rotten woodwork. Then, suddenly, as he rested there, the room was filled with the strong, sweet odour of mignonette. It came as upon a single buffet of wind with such sureness and fragrance and emphasis that it almost seemed a living visitant. And the man cried aloud, 'What, dear?' as if he had been called, and sprang up and faced about. The rich odour clung to him and wrapped him about. He reached out his arms for it, all his senses for the time confused and commingled. How could one be peremptorily called by an odour? Surely it must have been a sound. But, was it not the sound that had touched, that had caressed him? 'She has been in this room,' he cried, and he sprang to wrest from it a token, for he knew he would recognize the smallest thing that had belonged to her or that she had touched. This enveloping scent of mignonette, the odour that she had loved and made her own - whence came it? The room had been but carelessly set in order. Scattered upon the flimsy dresser scarf were half a dozen hairpins - those discreet, indistinguishable friends of womankind, feminine of gender, infinite of mood and uncommunicative of tense. These he ignored, conscious of their triumphant lack of identity. Ransacking the drawers of the dresser he came upon a discarded, tiny, ragged handkerchief. He pressed it to his face. It was racy and insolent with heliotrope; he hurled it to the floor. In another drawer he found odd buttons, a theatre programme, a pawnbroker's card, two lost marshmallows, a book on the divination of dreams. In the last was a woman's black satin hair-bow, which halted him, poised between ice and fire. But the black satin hair-bow also is femininity's demure, impersonal, common ornament, and tells no tales. And then he traversed the room like a hound on the scent, skimming the walls, considering the corners of the bulging matting on his hands and knees, rummaging mantel and tables, the curtains and hangings, the drunken cabinet in the corner, for a visible sign unable to perceive that she was there beside, around, against, within, above him, clinging to him, wooing him, calling him so poignantly through the finer senses that even his grosser ones became cognizant of the call. Once again he answered loudly, 'Yes, dear!' and turned, wild-eyed, to gaze on vacancy, for he could not yet discern form and colour and love and outstretched arms in the odour of mignonette. Oh, God! whence that odour, and since when have odours had a voice to call? Thus he groped. ";
	char sw[11000];
	
	long int l=strlen(mstory);
	long int j,f=0;
	int second=0;
	int minute=0,pt,bt=0,ct,dt=0;
//	thread th1,th2,th3;

	time_t tstart,tend,fstart,fend,timesetend,timesetstart;
	void st()	//Used As the Constructor
	{
		ff=0;
		tms=900000;
		difrnc=0;
		tdifrnc=0;
		ale=0;
		ch=' ';
		diff=0;
		speed=0;
		fspeed=0;
		tim=5000;

		count=0;
		cn=0;
		strcpy(mmstory,"                                                       ");
		strcpy(mstory,"                                                       ");
		strcpy(st1,"First Mrs. Parker would show you the double parlours. You would not dare to interrupt her description of their advantages and of the merits of the gentleman who had occupied them for eight years. Then you would manage to stammer forth the confession that you were neither a doctor nor a dentist. Mrs. Parker's manner of receiving the admission was such that you could never afterward entertain the same feeling toward your parents, who had neglected to train you up in one of the professions that fitted Mrs. Parker's parlours. Next you ascended one flight of stairs and looked at the second floor back at $8. Convinced by her second-floor manner that it was worth the $12 that Mr. Toosenberry always paid for it until he left to take charge of his brother's orange plantation in Florida near Palm Beach, where Mrs. McIntyre always spent the winters that had the double front room with private bath, you managed to babble that you wanted something still cheaper. If you survived Mrs. Parker's scorn, you were taken to look at Mr. Skidder's large hall-room on the third floor. Mr. Skidder's room was not vacant. He wrote plays and smoked cigarettes in it all day long. But every room-hunter was made to visit his room to admire the lambrequins. After each visit, Mr. Skidder, from the fright caused by possible eviction, would pay something on his rent. Then - oh, then - if you still stood on one foot with your hot hand clutching the three moist dollars in your pocket, and hoarsely proclaimed your hideous and culpable poverty, nevermore would Mrs. Parker be cicerone of yours. She would honk loudly the word 'Clara,' she would show you her back, and march downstairs. Then Clara, the coloured maid, would escort you up the carpeted ladder that served for the fourth flight, and show you the Skylight Room. It occupied 7 by 8 feet of floorspace at the middle of the hall. On each side of it was a dark lumber closet or store-room. In it was an iron cot, a washstand and a chair. A shelf was the dresser. Its four bare walls seemed to close in upon you like the sides of a coin. Your hand crept to your throat, you gasped, you looked up as from a well - and breathed once more. Through the glass of the little skylight you saw a square of blue infinity. 'Two dollars, suh,' Clara would say in her half-contemptuous, half-Tuskegeenial tones. One day Miss Leeson came hunting for a room. She carried a typewriter made to be lugged around by a much larger lady. She was a very little girl, with eyes and hair that kept on growing after she had stopped and that always looked as if they were saying: 'Goodness me. Why didn't you keep up with us?' Mrs. Parker showed her the double parlours. 'In this closet,' she said, 'one could keep a skeleton or anaesthetic or coal - ' 'But I am neither a doctor nor a dentist,' said Miss Leeson with a shiver. Mrs. Parker gave her the incredulous, pitying, sneering, icy stare that she kept for those who failed to qualify as doctors or dentists, and led the way to the second floor back. 'Eight dollars?' said Miss Leeson. 'Dear me! I'm not Hetty if I do look green. I'm just a poor little working girl. Show me something higher and lower.' Mr. Skidder jumped and strewed the floor with cigarette stubs at the rap on his door. 'Excuse me, Mr. Skidder,' said Mrs. Parker, with her demon's smile at his pale looks. 'I didn't know you were in. I asked the lady to have a look at your lambrequins.' 'They're too lovely for anything,' said Miss Leeson, smiling in exactly the way the angels do. After they had gone Mr. Skidder got very busy erasing the tall, black-haired heroine from his latest (unproduced) play and inserting a small, roguish one with heavy, bright hair and vivacious features. 'Anna Held'll jump at it,' said Mr. Skidder to himself, putting his feet up against the lambrequins and disappearing in a cloud of smoke like an aerial cuttlefish. Presently the tocsin call of 'Clara!' sounded to the world the state of Miss Leeson's purse. A dark goblin seized her, mounted a Stygian stairway, thrust her into a vault with a glimmer of light in its top and muttered the menacing and cabalistic words 'Two dollars!' 'I'll take it!' sighed Miss Leeson, sinking down upon the squeaky iron bed. Every day Miss Leeson went out to work. At night she brought home papers with handwriting on them and made copies with her typewriter. Sometimes she had no work at night, and then she would sit on the steps of the high stoop with the other roomers. Miss Leeson was not intended for a skylight room when the plans were drawn for her creation. She was gay-hearted and full of tender, whimsical fancies. Once she let Mr. Skidder read to her three acts of his great (unpublished) comedy, 'It's No Kid; or, The Heir of the Subway.' There was rejoicing among the gentlemen roomers whenever Miss Leeson had time to sit on the steps for an hour or two. But Miss Longnecker, the tall blonde who taught in a public school and said 'Well, really!' to everything you said, sat on the top step and sniffed. And Miss Dorn, who shot at the moving ducks at Coney every Sunday and worked in a department store, sat on the bottom step and sniffed. Miss Leeson sat on the middle step, and the men would quickly group around her. Especially Mr. Skidder, who had cast her in his mind for the star part in a private, romantic (unspoken) drama in real life. And especially Mr. Hoover, who was forty-five, fat, flushed and foolish. And especially very young Mr. Evans, who set up a hollow cough to induce her to ask him to leave off cigarettes. The men voted her 'the funniest and jolliest ever,' but the sniffs on the top step and the lower step were implacable.");
		strcpy(st2,"When one loves ones art no service seems too hard. That is our premise. This story shall draw a conclusion from it, and show at the same time that the premise is incorrect. That will be a new thing in logic, and a feat in story-telling somewhat older than the Great Wall of China. Joe Larrabee came out of the post-oak flats of the Middle West pulsing with a genius for pictorial art. At six he drew a picture of the town pump with a prominent citizen passing it hastily. This effort was framed and hung in the drug store window by the side of the ear of corn with an uneven number of rows. At twenty he left for New York with a flowing necktie and a capital tied up somewhat closer. Delia Caruthers did things in six octaves so promisingly in a pine-tree village in the South that her relatives chipped in enough in her chip hat for her to go 'North' and 'finish.' They could not see her f -, but that is our story Joe and Delia met in an atelier where a number of art and music students had gathered to discuss chiaroscuro, Wagner, music, Rembrandt's works pictures, Waldteufel, wall-paper, Chopin, and Oolong. Joe and Delia became enamoured one of the other or each of the other, as you please, and in a short time were married - for (see above), when one loves one's Art no service seem too hard. Mr. and Mrs. Larrabee began housekeeping in a flat. It was a lonesome flat - something like the A sharp way down at the lefthand end of the keyboard. And they were happy; for they had their Art and they had each other. And my advice to the rich young man would be - sell all thou hast, and give it to the poor - janitor for the privilege of living in a flat with your Art and your Delia. Flat-dwellers shall endorse my dictum that theirs is the only true happiness. If a home is happy it cannot fit too close - let the dresser collapse and become a billiard table; let the mantel turn to a rowing machine, the escritoire to a spare bedchamber, the washstand to an upright piano; let the four walls come together, if they will, so you and your Delia are between. But if home be the other kind, let it be wide and long - enter you at the Golden Gate, hang your hat on Hatteras, your cape on Cape Horn, and go out by Labrador. Joe was painting in the class of the great Magister - you know his fame. His fees are high; his lessons are light - his high-lights have brought him renown. Delia was studying under Rosenstock you know his repute as a disturber of the piano keys. They were mighty happy as long as their money lasted. So is every - but I will not be cynical. Their aims were very clear and defined. Joe was to become capable very soon of turning out pictures that old gentlemen with thin side-whiskers and thick pocketbooks would sandbag one another in his studio for the privilege of buying. Delia was to become familiar and then contemptuous with Music, so that when she saw the orchestra seats and boxes unsold she could have sore throat and lobster in a private dining-room and refuse to go on the stage. But the best, in my opinion, was the home life in the little flat the ardent, voluble chats after the day's study; the cosy dinners and fresh, light breakfasts; the interchange of ambitions - ambitions interwoven each with the other's or else inconsiderable - the mutual help and inspiration; and - overlook my artlessness stuffed olives and cheese sandwiches at 11p.m. But after awhile Art flagged. It sometimes does, even if some switchman doesn't flag it. Everything going out and nothing coming in, as the vulgarians say. Money was lacking to pay Mr. Magister and Herr Rosenstock their prices. When one loves one's Art no service seems too hard. So, Delia said she must give music lessons to keep the chafing dish bubbling. For two or three days she went out canvassing for pupils. One evening she came home elated. 'Joe, dear,' she said gleefully, 'I've a pupil. And, oh, the loveliest people! General - General A. B. Pinkney's daughter - on Seventyfirst Street. Such a splendid house, Joe - you ought to see the front door! Byzantine I think you would call it. And inside! Oh, Joe, I never saw anything like it before. 'My pupil is his daughter Clementina. I dearly love her already. She's a delicate thing - dresses always in white; and the sweetest, simplest manners! Only eighteen years old. I'm to give three lessons a week; and, just think, Joe! $5 a lesson. I don't mind it a bit; for when I get two or three more pupils I can resume my lessons with Herr Rosenstock. Now, smooth out that wrinkle between your brows, dear, and let's have a nice supper.' 'That's all right for you, Dele,' said Joe, attacking a can of peas with a carving knife and a hatchet, 'but how about me? Do you think I'm going to let you hustle for wages while I philander in the regions of high art? Not by the bones of Benvenuto Cellini! I guess I can sell papers or lay cobblestones, and bring in a dollar or two.' Delia came and hung about his neck. 'Joe, dear, you are silly. You must keep on at your studies. It is not as if I had quit my music and gone to work at something else. While I teach I learn. I am always with my music. And we can live as happily as millionaires on $15 a week. You mustn't think of leaving Mr. Magister.' 'All right,' said Joe, reaching for the blue scalloped vegetable dish. 'But I hate for you to be giving lessons. It isn't Art. But you're a trump and a dear to do it.' 'When one loves one's Art no service seems too hard,' said Delia. 'Magister praised the sky in that sketch I made in the park,' said Joe. 'And Tinkle gave me permission to hang two of them in his window. I may sell one if the right kind of a moneyed idiot sees them.' 'I'm sure you will,' said Delia sweetly. 'And now let's be thankful for General Pinkney and this veal roast.' During all of the next week the Larrabees had an early breakfast. Joe was enthusiastic about some morning-effect sketches he was doing in Central Park, and Delia packed him off breakfasted, coddled, praised, and kissed at seven o'clock. Art is an engaging mistress. It was most times seven o'clock when he returned in the evening. At the end of the week Delia, sweetly proud but languid, triumphantly tossed three five-dollar bills on the 8 by 10 (inches) centre table of the 8 by 10 (feet) flat parlour. 'Sometimes,' she said, a little wearily, 'Clementina tries me. I'm afraid she doesn't practise enough, and I have to tell her the same things so often. And then she always dresses entirely in white, and that does get monotonous. But General Pinkney is the dearest old man! I wish you could know him, Joe. He comes in sometimes ");
		strcpy(st3,"On his bench in madison square Soapy moved uneasily. When wild goose honk high of nights, and when women without sealskin coats grow kind to their husbands, and when Soapy moves uneasily on his bench in the park, you may know that winter is near at hand. A dead leaf fell in Soapy's lap. That was Jack Frost's card. Jack is kind to the regular denizens of Madison Square, and gives fair warning of his annual call. At the corners of four streets he hands his pasteboard to the North Wind, footman of the mansion of All Outdoors, so that the inhabitants thereof may make ready. Soapy's mind became cognizant of the fact that the time had come for him to resolve himself into a singular Committee of Ways and Means to provide against the coming rigour. And therefore he moved uneasily on his bench. The hibernatorial ambitions of Soapy were not of the highest. In them were no considerations of Mediterranean cruises, of soporific Southern skies or drifting in the Vesuvian Bay. Three months on the Island was what his soul craved. Three months of assured board and bed and congenial company, safe from Boreas and bluecoats, seemed to Soapy the essence of things desirable. For years the hospitable Blackwell's had been his winter quarters. Just as his more fortunate fellow New Yorkers had bought their tickets to Palm Beach and the Riviera each winter, so Soapy had made his humble arrangements for his annual hegira to the Island. And now the time was come. On the previous night three Sabbath newspapers, distributed beneath his coat, about his ankles and over his lap, had failed to repulse the cold as he slept on his bench near the spurting fountain in the ancient square. So the Island loomed large and timely in Soapy's mind. He scorned the provisions made in the name of charity for the city's dependents. In Soapy's opinion the Law was more benign than Philanthropy. There was an endless round of institutions, municipal and eleemosynary, on which he might set out and receive lodging and food accordant with the simple life. But to one of Soapy's proud spirit the gifts of charity are encumbered. If not in coin you must pay in humiliation of spirit for every benefit received at the hands of philanthropy. As Caesar had his Brutus, every bed of charity must have its toll of a bath, every loaf of bread its compensation of a private and personal inquisition. Wherefore it is better to be a guest of the law, which, though conducted by rules, does not meddle unduly with a gentleman's private affairs. Soapy, having decided to go to the Island, at once set about accomplishing his desire. There were many easy ways of doing this. The pleasantest was to dine luxuriously at some expensive restaurant; and then, after declaring insolvency, be handed over quietly and without uproar to a policeman. An accommodating magistrate would do the rest. Soapy left his bench and strolled out of the square and across the level sea of asphalt, where Broadway and Fifth Avenue flow together, Up Broadway he turned, and halted at a glittering café, where are gathered together nightly the choicest products of the grape, the silkworm and the protoplasm. Soapy had confidence in himself from the lowest button of his vest upward. He was shaven, and his coat was decent and his neat black, ready-tied four-in-hand had been presented to him by a lady missionary on Thanksgiving Day. If he could reach a table in the restaurant unsuspected success would be his. The portion of him that would show above the table would raise no doubt in the waiter's mind. A roasted mallard duck, thought Soapy, would be about the thing - with a bottle of Chablis, and then Camembert, a demi-tasse and a cigar. One dollar for the cigar would be enough. The total would not be so high as to call forth any supreme manifestation of revenge from the café management; and yet the meat would leave him filled and happy for the journey to his winter refuge. But as Soapy set foot inside the restaurant door the head waiter's eye fell upon his frayed trousers and decadent shoes. Strong and ready hands turned him about and conveyed him in silence and haste to the sidewalk and averted the ignoble fate of the menaced mallard. Soapy turned off Broadway. It seemed that his route to the coveted Island was not to be an epicurean one. Some other way of entering limbo must be thought of. At a corner of Sixth Avenue electric lights and cunningly displayed wares behind plate-glass made a shop window conspicuous. Soapy took a cobblestone and dashed it through the glass. People came running round the corner, a policeman in the lead. Soapy stood still, with his hands in his pockets, and smiled at the sight of brass buttons. 'Where's the man that done that?' inquired the officer excitedly. 'Don't you figure out that I might have had something to do with it?' said Soapy, not without sarcasm, but friendly, as one greets good fortune. The policeman's mind refused to accept Soapy even as a clue. Men who smash windows do not remain to parley with the law's minions. They take to their heels. The policeman saw a man halfway down the block running to catch a car. With drawn club he joined in the pursuit. Soapy, with disgust in his heart, loafed along, twice unsuccessful. On the opposite side of the street was a restaurant of no great pretensions. It catered to large appetites and modest purses. Its crockery and atmosphere were thick; its soup and napery thin. Into this place Soapy took his accusive shoes and tell-tale trousers without challenge. At a table he sat and consumed beefsteak, flapjacks, doughnuts and pie. And then to the waiter he betrayed the fact that the minutest coin and himself were strangers. 'Now, get busy and call a cop,' said Soapy. 'And don't keep a gentleman waiting.' 'No cop for youse,' said the waiter, with a voice like butter cakes and an eye like the cherry in a Manhattan cocktail. 'Hey, Con!' Neatly upon his left ear on the callous pavement two waiters pitched Soapy. He arose, joint by joint, as a carpenter's rule opens, and beat the dust from his clothes. Arrest seemed but a rosy dream. The Island seemed very far away. A policeman who stood before a drug store two doors away laughed and walked down the street. Five blocks Soapy travelled before his courage permitted him to woo capture again. This time the opportunity presented what he fatuously termed to himself a 'cinch.' A young woman of a modest and pleasing guise was standing before a show window gazing with sprightly interest at its display of shaving mugs and inkstands, and two yards from the window a large policeman of severe demeanour leaned against a water-plug. It was Soapy's design to assume the role of the despicable and execrated 'masher.' The refined and elegant appearance of his ");
		strcpy(st4,"I don't suppose it will knock any of you people off your perch to read a contribution from an animal. Mr. Kipling and a good many others have demonstrated the fact that animals can express themselves in remunerative English, and no magazine goes to press nowadays without an animal story in it, except the old-style monthlies that are still running pictures of Bryan and the Mont Pelée horror. But you needn't look for any stuck-up literature in my piece, such as Bearoo, the bear, and Snakoo, the snake, and Tammanoo, the tiger, talk in the jungle books. A yellow dog that's spent most of his life in a cheap New York flat, sleeping in a corner on an old sateen underskirt (the one she spilled port wine on at the Lady Longshoremen's banquet), mustn't be expected to perform any tricks with the art of speech. I was born a yellow pup; date, locality, pedigree and weight unknown. The first thing I can recollect, an old woman had me in a basket at Broadway and Twenty-third trying to sell me to a fat lady. Old Mother Hubbard was boosting me to beat the band as a genuine Pomeranian-Hambletonian-Red-Irish-Cochin-ChinaStoke-Pogis fox terrier. The fat lady chased a V around among the samples of gros grain flannelette in her shopping-bag till she cornered it, and gave up. From that moment I was a pet - a mamma's own wootsey squidlums. Say, gentle reader, did you ever have a 200-pound woman breathing a flavour of Camembert cheese and Peau d'Espagne pick you up and wallop her nose all over you, remarking all the time in an Emma Eames tone of voice: 'Oh, oo's um oodlum, doodlum, woodlum, toodlum, bitsy-witsy skoodlums?' From a pedigreed yellow pup I grew up to be an anonymous yellow cur looking like a cross between an Angora cat and a box of lemons. But my mistress never tumbled. She thought that the two primeval pups that Noah chased into the ark were but a collateral branch of my ancestors. It took two policemen to keep her from entering me at the Madison Square Garden for the Siberian bloodhound prize. I'll tell you about that flat. The house was the ordinary thing in New York, paved with Parian marble in the entrance hall and cobblestones above the first floor. Our flat was three fl - well, not flights - climbs up. My mistress rented it unfurnished, and put in the regular things - 1903 antique upholstered parlour set, oil chromo of geishas in a Harlem tea-house, rubber plant and husband. By Sirius! there was a biped I felt sorry for. He was a little man with sandy hair and whiskers a good deal like mine. Hen-pecked? - well, toucans and flamingoes and pelicans all had their bills in him. He wiped the dishes and listened to my mistress tell about the cheap, ragged things the lady with the squirrel-skin coat on the second floor hung out on her line to dry. And every evening while she was getting supper she made him take me out on the end of a string for a walk. If men knew how women pass the time when they are alone they'd never marry. Laura Lean Jibbey, peanut brittle, a little almond cream on the neck muscles, dishes unwashed, half an hour's talk with the iceman, reading a package of old letters, a couple of pickles and two bottles of malt extract, one hour peeking through a hole in the window shade into the flat across the airshaft - that's about all there is to it. Twenty minutes before time for him to come home from work she straightens up the house, fixes her rat so it won't show, and gets out a lot of sewing for a ten-minute bluff. I led a dog's life in that flat. 'Most all day I lay there in my corner watching the fat woman kill time. I slept sometimes and had pipe dreams about being out chasing cats into basements and growling at old ladies with black mittens, as a dog was intended to do. Then she would pounce upon me with a lot of that drivelling poodle palaver and kiss me on the nose - but what could I do? A dog can't chew cloves. I began to feel sorry for Hubby, dog my cats if I didn't. We looked so much alike that people noticed it when we went out; so we shook the streets that Morgan's cab drives down, and took to climbing the piles of last December's snow on the streets where cheap people live. One evening when we were thus promenading, and I was trying to look like a prize St. Bernard, and the old man was trying to look like he wouldn't have murdered the. first organ-grinder he heard play Mendelssohn's wedding-march, I looked up at him and said, in my way: 'What are you looking so sour about, you oakum trimmed lobster? She don't kiss you. You don't have to sit on her lap and listen to talk that would make the book of a musical comedy sound like the maxims of Epictetus. You ought to be thankful you're not a dog. Brace up, Benedick, and bid the blues begone.' The matrimonial mishap looked down at me with almost canine intelligence in his face. 'Why, doggie,' says he, 'good doggie. You almost look like you could speak. What is it, doggie - Cats?' Cats! Could speak! But, of course, he couldn't understand. Humans were denied the speech of animals. The only common ground of communication upon which dogs and men can get together is in fiction. In the flat across the hall from us lived a lady with a black-andtan terrier. Her husband strung it and took it out every evening, but he always came home cheerful and whistling. One day I touched noses with the black-and-tan in the hall, and I struck him for an elucidation. 'See, here, Wiggle-and-Skip,' I says, 'you know that it ain't the nature of a real man to play dry-nurse to a dog in public. I never saw one leashed to a bow-wow yet that didn't look like he'd like to lick every other man that looked at him. But your boss comes in every day as perky and set up as an amateur prestidigitator doing the egg trick. How does he do it? Don't tell me he likes it.' 'Him?' says the black-and-tan. 'Why, he uses Nature's Own Remedy. He gets spifflicated. At first when we go out he's as shy as the man on the steamer who would rather play pedro when they make 'em all jackpots. By the time we've been in eight saloons he don't care whether the thing on the end of his line is a dog or a catfish. I've lost two inches of my tail trying to sidestep those swinging doors.' The pointer I got from that terrier - vaudeville please copy - set me to thinking. One evening about six o'clock my mistress ordered him to get busy and do the ozone act for Lovey. I have concealed it until now, but that is what she called me. The black-and-tan was called 'Tweetness.' I consider that I have the bulge on him as far as you could chase a rabbit. Still 'Lovey' is something of a nomenclatural tin-can on the tail of one's self-respect. At a quiet place on a safe street I tightened the line of my custodian in front of an attractive, refined saloon. I made a dead-ahead scramble for the doors, whining like a dog in the press despatches that lets the family know that little Alice is bogged while gathering lilies in the brook. 'Why, darn my eyes,' says the old man, with a grin; 'darn my eyes if the saffron-coloured son of a seltzer lemonade ain't asking me in to take a drink. Lemme see - how long's it been since I saved shoe leather by keeping one foot on the footrest? I believe I'll - ' I knew I had him. Hot Scotches he took, sitting at a table. For an hour he kept the Campbells coming. I sat by his side rapping for the waiter with my tail, and eating free lunch such as mamma in her flat never equalled with her homemade truck bought at a delicatessen store eight minutes before papa comes home. When the products of Scotland were all exhausted except the rye bread the old man unwound me from the table leg and played me outside like a fisherman plays a salmon. Out there he took off my collar and threw it into the street. 'Poor doggie,' says he; 'good doggie. She shan't kiss you any more. 'S a darned shame. Good doggie, go away and get run over by a street car and be happy.' I refused to leave. I leaped and frisked around the old man's legs happy as a pug on a rug. 'You old flea-headed woodchuck-chaser,' I said to him - 'you moon-baying, rabbit-pointing, egg-stealing old beagle, can't you see that I don't want to leave you? Can't you see that we're both Pups in the Wood and the missis is the cruel uncle after you with the dish towel and me with the flea liniment and a pink bow to tie on my tail. Why not cut that all out and be pards for evermore?' Maybe you'll say he didn't understand - maybe he didn't. But he kind of got a grip on the Hot Scotches, and stood still for a minute, thinking. 'Doggie,' says he finally, 'we don't live more than a dozen lives on this earth, and very few of us live to be more than 300. If I ever see that flat any more I'm a flat, and if you do you're flatter; and that's no flattery. I'm offering 60 to 1 that Westward Ho wins out by the length of a dachshund.' There was no string, but I frolicked along with my master to the Twenty-third Street ferry. And the cats on the route saw reason to give thanks that prehensile claws had been given them. On the Jersey side my master said to a stranger who stood eating a currant bun: 'Me and my doggie, we are bound for the Rocky Mountains.' But what pleased me most was when my old man pulled both of my ears until I howled, and said: 'You common, monkey-headed, rat-tailed, sulphur-coloured son of a door-mat, do you know what I'm going to call you?' I thought of 'Lovey,' and I whined dolefully. 'I'm going to call you 'Pete,' ' says my master; and if I'd had five tails I couldn't have done enough wagging to do justice to the occasion.");
		strcpy(st5,"Restless, shifting, fugacious as time itself, is a certain vast bulk of the population of the redbrick district of the lower West Side. Homeless, they have a hundred homes. They flit from furnished room to furnished room, transients for ever - transients in abode, transients in heart and mind. They sing 'Home Sweet Home' in ragtime; they carry their lares et penates in a bandbox; their vine is entwined about a picture hat; a rubber plant is their fig tree. Hence the houses of this district, having had a thousand dwellers, should have a thousand tales to tell, mostly dull ones, no doubt; but it would be strange if there could not be found a ghost or two in the wake of all these vagrant ghosts. One evening after dark a young man prowled among these crumbling red mansions, ringing their bells. At the twelfth he rested his lean hand-baggage upon the step and wiped the dust from his hat-band and forehead. The bell sounded faint and far away in some remote, hollow depths. To the door of this, the twelfth house whose bell he had rung, came a housekeeper who made him think of an unwholesome, surfeited worm that had eaten its nut to a hollow shell and now sought to fill the vacancy with edible lodgers. He asked if there was a room to let. 'Come in,' said the housekeeper. Her voice came from her throat; her throat seemed lined with fur. 'I have the third floor back, vacant since a week back. Should you wish to look at it?' The young man followed her up the stairs. A faint light from no particular source mitigated the shadows of the halls. They trod noiselessly upon a stair carpet that its own loom would have forsworn. It seemed to have become vegetable; to have degenerated in that rank, sunless air to lush lichen or spreading moss that grew in patches to the staircase and was viscid under the foot like organic matter. At each turn of the stairs were vacant niches in the wall. Perhaps plants had once been set within them. If so they had died in that foul and tainted air. It may be that statues of the saints had stood there, but it was not difficult to conceive that imps and devils had dragged them forth in the darkness and down to the unholy depths of some furnished pit below. 'This is the room,' said the housekeeper, from her furry throat. 'It's a nice room. It ain't often vacant. I had some most elegant people in it last summer - no trouble at all, and paid in advance to the minute. The water's at the end of the hall. Sprowls and Mooney-kept it three months. They done a vaudeville sketch. Miss B'retta Sprowls - you may have heard of her - Oh, that was just the stage names - right there over the dresser is where the marriage certificate hung, framed. The gas is here, and you see there is plenty of closet room. It's a room everybody likes. It never stays idle long.' 'Do you have many theatrical people rooming here?' asked the young man. 'They comes and goes. A good proportion of my lodgers is connected with the theatres. Yes, sir, this is the theatrical district. Actor people never stays long anywhere. I get my share. Yes, they comes and they goes.' He engaged the room, paying for a week in advance. He was tired, he said, and would take possession at once. He counted out the money. The room had been made ready, she said, even to towels and water. As the housekeeper moved away he put, for the thousandth time, the question that he carried at the end of his tongue. 'A young girl - Miss Vashner - Miss Eloise Vashner - do you remember such a one among your lodgers? She would be singing on the stage, most likely. A fair girl, of medium height and slender, with reddish gold hair and a dark mole near her left eyebrow.' 'No, I don't remember the name. Them stage people has names they change as often as their rooms. They comes and they goes. No, I don't call that one to mind.' No. Always no. Five months of ceaseless interrogation and the inevitable negative. So much time spent by day in questioning managers, agents, schools and choruses; by night among the audiences of theatres from all-star casts down to music-halls so low that he dreaded to find what he most hoped for. He who had loved her best had tried to find her. He was sure that since her disappearance from home this great water-girt city held her somewhere, but it was like a monstrous quicksand, shifting its particles constantly, with no foundation, its upper granules of to-day buried to-morrow in ooze and slime. The furnished room received its latest guest with a first glow of pseudo-hospitality, a hectic, haggard, perfunctory welcome like the specious smile of a demirep. The sophistical comfort came in reflected gleams from the decayed furniture, the ragged brocade upholstery of a couch and two chairs, a footwide cheap pier glass between the two windows, from one or two gilt picture frames and a brass bedstead in a corner. The guest reclined, inert, upon a chair, while the room, confused in speech as though it were an apartment in Babel, tried to discourse to him of its divers tenantry. A polychromatic rug like some brilliant-flowered, rectangular, tropical islet lay surrounded by a billowy sea of soiled matting. Upon the gay-papered wall were those pictures that pursue the homeless one from house to house - The Huguenot Lovers, The First Quarrel, The Wedding Breakfast, Psyche at the Fountain. The mantel's chastely severe outline was ingloriously veiled behind some pert drapery drawn rakishly askew like the sashes of the Amazonian ballet. Upon it was some desolate flotsam cast aside by the room's marooned when a lucky sail had borne them to a fresh port - a trifling vase or two, pictures of actresses, a medicine bottle, some stray cards out of a deck. One by one, as the characters of a cryptograph become explicit, the little signs left by the furnished room's procession of guests developed a significance. The threadbare space in the rug in front of the dresser told that lovely woman had marched in the throng. Tiny finger-prints on the wall spoke of little prisoners trying to feel their way to sun and air. A splattered stain, raying like the shadow of a bursting bomb, witnessed where a hurled glass or bottle had splintered with its contents against the wall. Across the pier glass had been scrawled with a diamond in staggering letters the name 'Marie.' It seemed that the succession of dwellers in the furnished room had turned in fury - perhaps tempted beyond forbearance by its garish coldness - and wreaked upon it their passions. The furniture was chipped and bruised; the couch, distorted by bursting springs, seemed a horrible monster that had been slain during the stress of some grotesque convulsion. Some more potent upheaval had cloven a great slice from the marble mantel. Each plank in the floor owned its particular cant and shriek as from a separate and individual agony. It seemed incredible that all this malice and injury had been wrought upon the room by those who had called it for a time their home; and yet it may have been the cheated home instinct surviving blindly, the resentful rage at false household gods that had kindled their wrath. A hut that is our own we can sweep and adorn and cherish. The young tenant in the chair allowed these thoughts to file, soft-shod, through his mind, while there drifted into the room furnished sounds and furnished scents. He heard in one room a tittering and incontinent, slack laughter; in others the monologue of a scold, the rattling of dice, a lullaby, and one crying dully; above him a banjo tinkled with spirit. Doors banged somewhere; the elevated trains roared intermittently; a cat yowled miserably upon a back fence. And he breathed the breath of the house - a dank savour rather than a smell - a cold, musty effluvium as from underground vaults mingled with the reeking exhalations of linoleum and mildewed and rotten woodwork. Then, suddenly, as he rested there, the room was filled with the strong, sweet odour of mignonette. It came as upon a single buffet of wind with such sureness and fragrance and emphasis that it almost seemed a living visitant. And the man cried aloud, 'What, dear?' as if he had been called, and sprang up and faced about. The rich odour clung to him and wrapped him about. He reached out his arms for it, all his senses for the time confused and commingled. How could one be peremptorily called by an odour? Surely it must have been a sound. But, was it not the sound that had touched, that had caressed him? 'She has been in this room,' he cried, and he sprang to wrest from it a token, for he knew he would recognize the smallest thing that had belonged to her or that she had touched. This enveloping scent of mignonette, the odour that she had loved and made her own - whence came it? The room had been but carelessly set in order. Scattered upon the flimsy dresser scarf were half a dozen hairpins - those discreet, indistinguishable friends of womankind, feminine of gender, infinite of mood and uncommunicative of tense. These he ignored, conscious of their triumphant lack of identity. Ransacking the drawers of the dresser he came upon a discarded, tiny, ragged handkerchief. He pressed it to his face. It was racy and insolent with heliotrope; he hurled it to the floor. In another drawer he found odd buttons, a theatre programme, a pawnbroker's card, two lost marshmallows, a book on the divination of dreams. In the last was a woman's black satin hair-bow, which halted him, poised between ice and fire. But the black satin hair-bow also is femininity's demure, impersonal, common ornament, and tells no tales. And then he traversed the room like a hound on the scent, skimming the walls, considering the corners of the bulging matting on his hands and knees, rummaging mantel and tables, the curtains and hangings, the drunken cabinet in the corner, for a visible sign unable to perceive that she was there beside, around, against, within, above him, clinging to him, wooing him, calling him so poignantly through the finer senses that even his grosser ones became cognizant of the call. Once again he answered loudly, 'Yes, dear!' and turned, wild-eyed, to gaze on vacancy, for he could not yet discern form and colour and love and outstretched arms in the odour of mignonette. Oh, God! whence that odour, and since when have odours had a voice to call? Thus he groped. ");
		

		l=strlen(mstory);
		f=0;
		second=0;
		minute=0;
		bt=0;
		dt=0;
//	thread th1,th2,th3;

			
	}
}obj;




//Delay function
void Delay(int delay=5)
{
	int m=0,s=0,ms=0,mms=0,h=0;
	while(h<delay)
	{
		mms++;
		if(mms==5){
			mms=0;
			ms++;
			if(ms==29){
				ms=0;
				s++;
			if(s==59){
				s=0;
				m++;
				if(m==59){
					m=0;
					h++;
					}
				}
			}
		}
	}
}


//Front page function
void Front()
{
	clrscr();
	char Temporary[300]="\t############################################################\n\n\t\t\t    WELCOME TO PROGRAM\n\n\t############################################################\n\n\t\t\t Typing Practice lite\n\n\t\t\t Created Date : 2018-07-23\n\t\t\t Last Update..: 2018-09-05\n\t\t\t Version......: 0.05\n\t\t\t Created By   : ABDHESH NAYAK";
	int Length=strlen(Temporary);
	for(int i=0;i<Length;i++)
	{
		setcolor(14);
		cout<<Temporary[i];
		Delay();
	}
	getch();
	clrscr();
}	





void starta()
{
	int fp=0;
	obj.l=strlen(obj.mstory);
	for(obj.j=0;obj.j<obj.l-15;obj.j++)
	{
		obj.tend=time(NULL);
		obj.difrnc=difftime(obj.tend,obj.tstart);
			if(obj.j==(obj.l-55))
			{
				obj.j=0;
					for(obj.k=0;obj.k<11000;obj.k++)
					{
						obj.sw[obj.k]=0;
					}
			}
		obj.ct=1;
		obj.ch=getch();
		obj.cl=obj.ch;
		if(fp==0)
		{
			obj.tstart=time(NULL);
			fp++;
		}
		obj.difrnc=difftime(obj.tend,obj.tstart);
		if(obj.difrnc>=obj.tms)
		{
			obj.cl=27;
			goto a;
		}
		if(obj.mstory[obj.j+55]==obj.ch)
		{
		//	clrscr();
			if(obj.ch==' ')
			{	
				obj.count++;
			}
		}
		else if(obj.ch==8)
		{
			if(obj.sw[obj.j+54]==1)
			{
				obj.cn--;
			}
			if((obj.mstory[obj.j+54]==' ')&&(obj.sw[obj.j+54])!=1)
			{
				obj.count--;
			}
			obj.sw[obj.j+54]=0;
			obj.j=obj.j-2;
		}
		else if(obj.cl==27)
		{
			goto a;
		}
		else
		{
			obj.sw[obj.j+55]=1;
			obj.cn++;
		}
		obj.fend=time(NULL);
	}
a:
	
	getch();	
	setcolor(4);
	cout<<"\n\n\t\tWrong Letters : "<<obj.cn;
	setcolor(7);
	
	obj.tend=time(NULL);
	obj.difrnc=difftime(obj.tend,obj.tstart);
	obj.second=obj.difrnc;
	obj.pt=obj.second/60;
	obj.minute=obj.pt;
	obj.pt=60*obj.pt;
	obj.second=obj.second-obj.pt;
	
	cout<<"\n\t\tTotal Word Typed : "<<obj.count<<"\tin "<<obj.minute<<" Minute";
	if(obj.fspeed<15)
		setcolor(4);
	else if(14<obj.fspeed&&obj.fspeed<30)
		setcolor(3);
	else
		setcolor(2);
	cout<<"\n\n\t\tYour speed is :"<<obj.fspeed<<"\n\n";
	obj.cn=obj.f=0;
	obj.ch=getchar();
}


void startb()
{
	char bh='~',dh='`';
	obj.ct=1;
	int oldtdifrnc=0;
	while(obj.cl!=27)
	{
/*	if(obj.cl==27)
	{
		break;
	}
*/		int a=0;
		if(a=0)
		{
			obj.timesetstart=time(NULL);
			a++;
		}
		while(obj.cl!=27)
		{
		
			obj.tend=time(NULL);
			obj.difrnc=difftime(obj.tend,obj.tstart);
	    	if(obj.cl==27)
    		{
    			break;
			} 
    
			obj.second=obj.difrnc;
    		if((obj.ct==1)||(obj.second!=oldtdifrnc))
    		{
    			obj.ct=0;
    			//cout<<"h";
    			oldtdifrnc=obj.second;
    			break;
			}
		}	
    	//clrscr();
    	replace();
    	if(obj.fspeed<15)
			setcolor(4);
		else if(14<obj.fspeed&&obj.fspeed<30)
			setcolor(3);
		else
			setcolor(10);
	
	
	    if(obj.ff!=1)
		{
			obj.second=obj.difrnc;
		}
	
		if(obj.ff==1)
		{
			obj.second=obj.tms-obj.difrnc;
		}
		obj.pt=obj.second/60;
		obj.minute=obj.pt;
		obj.pt=60*obj.pt;
		obj.second=obj.second-obj.pt;
	
	    cout<<"Esc:Close\n\n\n\n\t\t\t\t\tYour Typing Speed :"<<obj.fspeed<<"                         ";
	    if(obj.ff!=1)
		{
			cout<<"\n\t\t\t\t\tTimer : "<<obj.minute<<" Minute "<<obj.second<<" Seconds"<<"                       ";
		}
	
		if(obj.ff==1)
		{
			cout<<"\n\t\t\t\t\tTime remaining : "<<obj.minute<<" Minute "<<obj.second<<" Seconds"<<"                    ";
		}
		setcolor(15);
		cout<<"\n\n\n\tType The letter Of Box Which is YELLOW colour";
		setcolor(8);
		cout<<"\n=================================================================================================================\n\n";
		setcolor(7);
			
		for(int i=obj.j;i<obj.j+112;i++)
		{
			if(obj.sw[i]==1)
			{
					setcolor(4);
					cout<<"*";
					setcolor(7);
			}
			else
			{
				cout<<obj.mstory[i];
			}
	
			if(i==(obj.j+54))
			{
				cout<<"|";
			}
			if(i==obj.l)
			{
				break;
			}
		}
		setcolor(8);
		cout<<"\n======================================================[|";
		setcolor(6);
		cout<<obj.mstory[obj.j+55];
		setcolor(8);
		cout<<"|]======================================================";
		setcolor(5);
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tBy Abdhesh Nayak\n\t\t\t\t\t\t\tEmail:abdhesh@textnow.me\n\t\t\t\t\t\t\tDownload link: gg.gg/type-practice";
	
		obj.tend=time(NULL);
		obj.diff=(difftime(obj.tend,obj.tstart))/obj.count;
		obj.difrnc=difftime(obj.tend,obj.tstart);
		obj.fspeed=60/obj.diff;
	}

}


int start()
{
	system("color 07");
	int i;
	clrscr();
	setcolor(2);
	char Temporary[1850]="\t==============================  TYPE PRACTICE LITE   ==============================\n\n\t\t                    ///////////////                        \n\t\t                   //                                      \n\t\t                    //////////                             \n\t\t                            ./.                            \n\t\t*/////////////////////////////////////////////////////////*\n\t\t*/                                                       /*\n\t\t*/    //  //  /  //  //  //  /  //  //  //  /  //  //    /*\n\t\t*/  //  //  /* */  //  //  /* */  //  //  /* */  //  //  /*\n\t\t*/                                                       /*\n\t\t*/    //  //  /  //  //  //  /  //  //  //  /  //  //    /*\n\t\t*/                                                       /*\n\t\t*/  //  //    ///      //  /* */  //  ///*   */  //  //  /*\n\t\t*/        ////* /////                //  //              /*\n\t\t*/    /////  /* //  //   /////////   //  //              /*\n\t\t*/   //  //  /* //  //               //  ////.///        /*\n\t\t //////  //  /* //  ///////////////////  // */  ////////// \n\t\t     //  //  /* //  //               //  // */  //  //     \n\t\t     //             /////.       ./////             //     \n\t\t     //             //  //       //  //             //     \n\t\t     //             //  //       //  //             //     \n\t\t     //                 //       //                 //     \n\t\t      //               //         //               //      \n\t\t      ./*             //           //             */       \n\t\t       //           ///             ///           //       \n\t\t        //         //                 //         //        \n\t\t       ./////////////.               ./////////////.       \n\t\t       //           //               //           //       \n\t\t       //           //               //           //       ";
	int Length=strlen(Temporary);
	for(i=0;i<Length;i++)
	{
		cout<<Temporary[i];
		Delay(1);
	}
	Delay(500);
	clrscr();
	strcpy(Temporary,"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t!! !!  NOW YOU ARE READY TO START  !! !!\0");
	Length=strlen(Temporary);
	for(i=0;i<Length;i++)
	{
		cout<<Temporary[i];
		Delay();
	}
	
	getch();
	thread th1(startb);
	thread th2(starta);
	th1.join();
	th2.join();
	
	
	obj.difrnc=0,obj.tdifrnc=0,obj.ale=0;
	obj.ch=' ';
	obj.diff=0,obj.speed=0;
	obj.fspeed=0;
	
	obj.count=0,obj.chh,obj.cl=55,obj.cn=0;
	strcpy(obj.mmstory,"                                                       ");
	strcpy(obj.mstory,"                                                       ");
}







time_trial()
{	
	do 
	{
		system("color 70");
		strcpy(obj.mstory,obj.mmstory);
		tmm:
		obj.chh=8;
		start:
		clrscr();
		
		if(obj.ff==0)
		{
		//	setcolor(11);
			cout<<"\t==============================\n\t  PRACTICE FOR LONG TIME\n\t==============================";
	//		setcolor(12);
			cout<<"\n\t1.The Skylight Room...\n\t2.A Service of Love.....\n\t3.The Cop and the Anthem......\n\t4.Memoirs of a Yellow Dog...\n\t5.The Furnished Room.....\n\t6.Time Trial.......\n\t7.Exit";
	//		setcolor(13);
			cout<<"\n\t\tEnter Your Choice..:";
		}
		else
		{
	//		setcolor(11);
			cout<<"========================================\n\tTIME TRIAL FOR "<<obj.tim<<" Minutes\n========================================";
			// setcolor(12);
			cout<<"\nSelect A Story\n\t1.The Skylight Room...\n\t2.A Service of Love.....\n\t3.The Cop and the Anthem......\n\t4.Memoirs of a Yellow Dog...\n\t5.The Furnished Room.....\n\t7.Exit";
			// setcolor(13);
			cout<<"\n\t\tEnter Your Choice..:";	
		}	
		// setcolor(7);
		gets(obj.vv);
		sscanf(obj.vv,"%d",&obj.chh);
		obj.count=0;
		for(obj.k=0;obj.k<11000;obj.k++)
		{
			obj.sw[obj.k]=0;
		}
	
		switch(obj.chh)
		{
			case 1:
				strcat(obj.mstory,obj.st1);
				break;
			case 2:
				strcat(obj.mstory,obj.st2);
				break;
			case 3:
				strcat(obj.mstory,obj.st3);
				break;
			case 4:
				strcat(obj.mstory,obj.st4);
				break;
			case 5:
				strcat(obj.mstory,obj.st5);
				break;
			case 6:
				if(obj.ff==0)
				{
					obj.ff++;
				cout<<"\n\tEnter Time In Minute :";
				obj.tim=6000;
				gets(obj.vv);
				sscanf(obj.vv,"%d",&obj.tim);
				obj.tms=obj.tim*60;
				goto tmm;
				break;
				}
				else
				{
					goto def;
				}
			case 7:
			{
				// setcolor(10);
				obj.ff=0;	
				char Temporary[22]="\n\t\tThank You.........";
				int Length=strlen(Temporary);
				for(int i=0;i<Length;i++)
				{
					cout<<Temporary[i];
					Delay();
				}
				getch();
			}break;
			default:
				def:
				// setcolor(4);
				cout<<"\n\tINVALID Option";
				getch();
				goto start;
		}
		if(obj.chh<6)
		{
			start();
		}
	}while(obj.chh!=7);
}



void aboutme()
{
	clrscr();
	// setcolor(12);	
	char Temporary[1000]="\n\t\tType Practice Lite\n\nThis is a windows program which can enhance your typing speed.This program contains many features like:\n\n\t->You need not to install this program. Because this is compiled in hexcode so it runs directly....\n\t->You can Practice for a fix time by the time trial mode. You can set your time duaration by yourself.\n\t  Which is a best to practice in a fixed time....\n\t->You can Add Your own story which is best feature in the program you can practice with your favrate story....\n\t->You can see live timer to know time since when your are typing....\n\t->You can see live speed of your typing so you can know your typing speed live....\n\t->We are created this program based on bug less so there is only 1-2% chances of crass of app....\n\t->This app just take your 0.2 to 0.5 MB of your system memory which not effect on your pc speed....\n\t->This app just take your 1% of cpu to run which also not effect on your pc speed....\n\t->This app not create any junk files in your system...";
	int Length=strlen(Temporary);
	for(int i=0;i<Length;i++)
	{
		cout<<Temporary[i];
		Delay();
	}
	getch();
	clrscr();
}	


void Menu()
{
	thread th1;
	char vv[20];
	do
	{
		system("color 70");
		clrscr();
		// setcolor(11);
		cout<<"\t=========================\n\t  TYPING PRACTICE LITE\n\t=========================";
		// setcolor(12);
		cout<<"\n\n\tEnter A Choice To perform\n\t1.Start Type Practice\n\t2.Time Trial\n\t3.Practice From The Story list\n\t4.About Program\n\t5.Exit";
		// setcolor(13);
		cout<<"\n\t\tEnter Your choice..:";
		// setcolor(7);
		gets(vv);
		sscanf(vv,"%d",&obj.ch);
		switch(obj.ch)
		{
			case 1:
				clrscr();
				obj.ale=1;
				time_trial();
				
				break;
			case 2:
				if(obj.ff==0)
				{
					obj.ff++;
					// setcolor(6);
					cout<<"\n\tEnter Time In Minute :";
					// setcolor(7);
					obj.tim=6000;
					gets(vv);
					sscanf(vv,"%d",&obj.tim);
					obj.tms=obj.tim*60;
					time_trial();
					break;
				}
				break;
			case 3:
				clrscr();
				cout<<"\n\n\n\tTo Edit A Story You Can Update It By Notepad By Editing The File \"story.txt\"";
				getch();
				int SelectStory();
				SelectStory();
				break;
			case 4:
				aboutme();
				break;
			case 5:
			{
				// setcolor(12);	
				char Temporary[90]="\n\tThank You For using this app\n\t\t Share it with your friends if you like This Program";
				int Length=strlen(Temporary);
				for(int i=0;i<Length;i++)
				{
					cout<<Temporary[i];
					Delay();
				}
				getch();
			}	break;
			default:
				// setcolor(4);
				cout<<"\n\t\tInvalid Option";
				getch();
		}
	}while(obj.ch!=5);
}



void replace()
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}



int main()
{
	system("color 10");
	obj.st();
	Front();
	system("color 70");
	Menu();
}



int SelectStory()
{
	for(obj.k=0;obj.k<11000;obj.k++)
	{
		obj.sw[obj.k]=0;
	}
	char ch;
	char st[5];
	/*ch=' ';
	sprintf(st,"%c",ch);
	strcpy(obj.mstory,st);
	*/
	strcpy(obj.mmstory,"                                                       ");
	strcpy(obj.mstory,obj.mmstory);
	ifstream t1;
	t1.open("story.txt");
start:
	clrscr();
	t1.seekg(0);
	int temp;
	while(t1)
	{
		t1.get(ch);
		temp=ch;
	//	cout<<temp;
		if(temp==(-90))
		{
			break;
		}
		
		cout<<ch;
		Delay();
	}
	char chtemp;
	t1.get(ch);
	chtemp=getch();
	cout<<chtemp;
	getch();
	if(ch==chtemp)
	{
		cout<<"\n\tExited";
		return 5;
	}
	else if (chtemp>ch||chtemp<'1')
	{
		cout<<"\n\tWrong Choice Try Again";
		getch();
		goto start;
	}
	else
	{
		int bb;
		for(char i='1';i<=chtemp;i++)
		{
			while(bb!=(-37))
			{
				t1.get(ch);
				bb=ch;
			//	Delay(100);
			//	cout<<bb;
			//	cout<<ch;
			}
			bb=500;
		}
		cout<<"\n";
		while(t1)
		{
			t1.get(ch);
			bb=ch;
			if(bb==(-90))
			{
				break;
			}
			else if(bb==10)
			{
				ch=' ';
			}
			sprintf(st,"%c",ch);
			strcat(obj.mstory,st);
	//		cout<<ch;
			//	return 1;
			//	cout<<bb;
		}
	}
	strcat(obj.mstory,"\0                                                                                                      \0");
	start();
	//cout<<"\n\n\tEnd Of File";
	t1.close();
}


