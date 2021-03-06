{% if states.conference == 'ended' %}

    <p class="small">18 мая 2013&nbsp;г. в&nbsp;Санкт-Петербурге прошла конференция, посвященная юзабилити и&nbsp;проектированию пользовательского взаимодействия.</p>

    <p class="small">Презентации и&nbsp;видеозаписи (из&nbsp;Большого зала) будут доступны на&nbsp;страницах <a href="/papers/">докладов</a>. Фотографии смотрите <a href="https://www.facebook.com/Profsoux">в&nbsp;группе на&nbsp;Facebook</a>.</p>

    <p class="small">Спасибо всем, кто <a href="http://profsoux.ru/organizers/">сделал эту конференцию</a>!</p>

    <p><a href="{{ registration_url }}" class="btn btn-signup btn-primary btn-large">Хочу принять участие в&nbsp;ProfsoUX 2014</a>

{% endif %}

{% if states.conference == 'waiting' %}

    {% if states.registration = "waiting" %}
        {% if event.registration_start %}
            <p>Приём заявок на участие в конференции «ProfsoUX» откроется <nobr>{{ event.registration_start }}</nobr></p>
        {% endif %}

    {% elif states.registration = "active" %}
        <p><a href="/registration/" class="btn btn-signup btn-primary btn-large">Принять участие</a>

            <small>Торопитесь! Количество мест ограничено.</small><br />
            {% if event.registration_end %}
            Приём заявок прекращается
            {{ event.registration_end }}
            {% endif %}
        </p>

        <p>Программа конференции будет опубликована в ближайшее время. <a href="/speakers/">Посмотреть докладчиков »</a></p>
    {% else %}
        <p><small>Приём заявок на участие в конференции завершён<br />
            Вы сможете присоединиться к <a href="/online/">онлайн-трансляции</a>.</small></p>
    {% endif %}

    {% if counts.participants %}
        <p>Уже идут: {{ counts.participants }}. <a href="/people/">Кто идёт? »</a></p>
    {% endif %}

{% endif %}

{% if states.conference == 'in_progress' %}
    <p class="small">Регистрация закрыта. </p>

    <p class="small">Начало трансляции&nbsp;&mdash; 18&nbsp;мая в&nbsp;11:30. <a href="/online/">Смотреть онлайн-трансляцию</a></p>
{% endif %}

{% include "inc/btn-share.inc" %}
