import smtplib
from string import Template
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

MY_ADDRESS = 'siddhartsingh9876@gmail.com'
PASSWORD = '131306199513'

def main():
	names="nana" 
	emails="nammrata2248@gmail.com" #= get_contacts('contacts.txt') 
	message_template = "hahahahaahaha"
	s = smtplib.SMTP(host='smtp.gmail.com', port=465)
	s.starttls()
	s.login(MY_ADDRESS, PASSWORD)

	
	for name, email in zip(names, emails):
		msg = MIMEMultipart()

		
		message = message_template.substitute(PERSON_NAME=name.title())

		
		print(message)

		
		msg['From']=MY_ADDRESS
		msg['To']=email
		msg['Subject']="TEST"
		
		msg.attach(MIMEText(message, 'plain'))
		
		s.send_message(msg)
		del msg
		
	s.quit()
	
if __name__ == '__main__':
	main()