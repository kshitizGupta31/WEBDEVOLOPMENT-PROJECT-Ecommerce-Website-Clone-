def shutdown():
   import os 
     
   shutdown = input("Do you wish to shutdown your computer ? (yes / no): ") 
     
   if shutdown == 'no': 
       exit() 
   else: 
       os.system("shutdown /s /t 1")
def print(a1):
   # Import the required module for text   
   # to speech conversion 
   import pyttsx3 
     
   # init function to get an engine instance for the speech synthesis  
   engine = pyttsx3.init() 
     
   # say method on the engine that passing input text to be spoken 
   engine.say(a1) 
     
   # run and wait method, it processes the voice commands.  
   engine.runAndWait() 


a=input(': ')
if(a.lower()=='hi'):
   print('hi sir ,i am jarvis and u') 
   c=input(':')
   c1=('how are you ',c)
   print(c1)
   b=input(':')
   if (b.lower()=='fine'):
      print('nice,Good Im Glad To Hear That!')
   else :
       print('I am sorry,you will be fine soon')
elif (a.lower()=='jarvis'):
    print('  At ur service, sir ')
else:
   y=['hello sir,nice to meet u','hi sir ','at ur service.sir']
   import random
   h=(random.choice(list(y)))
   print(h)
for y in range(0,3):
    print('what can i do for u')
    d=input(":")
    if (d.lower()=='what can you do'):
        print('i can  be use as a 1.calculator  , for making 2.tables,3.for showing time,4.rotation of planet,5.i can say HELLO,6.calender')
    elif (d.lower()=='nothing'):
        print('why u do not want to know my service')
        ak=input(":")
        if (ak.lower()=='yes'):
            print('then i cannot do anything')
        else:
            print('then what are u waiting for')
        print('i can  be use as a 1.calculator  , for making 2.tables,3.for showing time,4.rotation of planet,5.i can say HELLO,6.calender')
    elif (d.lower()=='show ur features'):
        print('''i can  be use as a
                 1.calculator  ,
                 for making 2.tables,
                 3.for showing time,
                 4.rotation of planet,
                 5.i can say HELLO,
                 6.calender,
                 7.open paint,
                 8.quiz,
                 9.print parabola graph,
                 10.show calender,
                 11.show time,
                 12.play colour game''')
    elif (d.lower()=='search'):
          import webbrowser
          print('enter what u want to search')
          term=(input('enter what u want to search'))
          a2=('serching for ',term)
          print(a2)
          # ... construct your list of search terms ...
          url = "https://www.google.com.tr/search?q={}".format(term)
          webbrowser.open_new_tab(url)
    elif (d.lower()=='play'):
         import urllib.request
         import urllib.parse
         import re
         import webbrowser as wb
         query_string = urllib.parse.urlencode({"search_query": input("enter what u want to play?")})
         html_content = urllib.request.urlopen("http://www.youtube.com/results?" + query_string)
         search_results = re.findall(r'href=\"\/watch\?v=(.{11})', html_content.read().decode())
         a=("http://www.youtube.com/watch?v=" + search_results[0])
         wb.open(a)

    elif (d.lower()=='open web'):
          import webbrowser 
          h=input('which web u want to open')
          webbrowser.open('www.'+h+'.com')
    elif (d.lower()=='shutdown the pc'):
         shutdown()
    elif (d.lower()=='open paint'):
        #!/usr/bin/env python3
        """       turtle-example-suite:

                    tdemo_paint.py

        A simple  event-driven paint program