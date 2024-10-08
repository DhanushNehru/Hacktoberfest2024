import requests
from bs4 import BeautifulSoup

def fetch_news(url):
    try:
        response = requests.get(url)
        response.raise_for_status() 
        soup = BeautifulSoup(response.text, 'html.parser')
        headlines = soup.find_all('tr', class_='athing') # Adjust this based on the website's structure
        with open('news.txt', 'w', encoding='utf-8') as file:
            for headline in headlines:
                file.write(headline.get_text().strip() + '\n')

        print(f"Successfully fetched {len(headlines)} headlines from {url}")

    except requests.exceptions.RequestException as e:
        print(f"Failed to retrieve the news: {e}")
    except Exception as e:
        print(f"An error occurred: {e}")

fetch_news('https://news.ycombinator.com/news')